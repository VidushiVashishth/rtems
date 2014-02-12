/**
 * @file
 * @ingroup sparc_leon3
 * @brief LEON3 SMP BSP Support
 */

/*
 *  COPYRIGHT (c) 1989-2011.
 *  On-Line Applications Research Corporation (OAR).
 *
 *  The license and distribution terms for this file may be
 *  found in the file LICENSE in this distribution or at
 *  http://www.rtems.com/license/LICENSE.
 */

#include <bsp.h>
#include <leon.h>
#include <rtems/bspIo.h>
#include <rtems/bspsmp.h>
#include <stdlib.h>

#define RTEMS_DEBUG

static inline void sparc_leon3_set_cctrl( unsigned int val )
{
  __asm__ volatile( "sta %0, [%%g0] 2" : : "r" (val) );
}

static inline unsigned int sparc_leon3_get_cctrl( void )
{
  unsigned int v = 0;
  __asm__ volatile( "lda [%%g0] 2, %0" : "=r" (v) : "0" (v) );
  return v;
}

static rtems_isr bsp_ap_ipi_isr(
  rtems_vector_number vector
)
{
  rtems_smp_process_interrupt();
}

void leon3_secondary_cpu_initialize(uint32_t cpu)
{
  sparc_leon3_set_cctrl( 0x80000F );
  LEON_Unmask_interrupt(LEON3_MP_IRQ);
  LEON3_IrqCtrl_Regs->mask[cpu] |= 1 << LEON3_MP_IRQ;

  rtems_smp_secondary_cpu_initialize();
}

uint32_t bsp_smp_initialize( uint32_t configured_cpu_count )
{
  uint32_t cpu;
  uint32_t found_cpus = 0;

  sparc_leon3_set_cctrl( 0x80000F );
  found_cpus =
    ((LEON3_IrqCtrl_Regs->mpstat >> LEON3_IRQMPSTATUS_CPUNR) & 0xf)  + 1;

  #if defined(RTEMS_DEBUG)
    printk( "Found %d CPUs\n", found_cpus );

    if ( found_cpus > configured_cpu_count ) {
      printk(
        "%d CPUs IS MORE THAN CONFIGURED -- ONLY USING %d\n",
        found_cpus,
        configured_cpu_count
      );
      found_cpus = configured_cpu_count;
    }
  #endif

  if ( found_cpus > 1 ) {
    LEON_Unmask_interrupt(LEON3_MP_IRQ);
    set_vector(bsp_ap_ipi_isr, LEON_TRAP_TYPE(LEON3_MP_IRQ), 1);
  }

  for ( cpu = 1 ; cpu < found_cpus ; ++cpu ) {
    #if defined(RTEMS_DEBUG)
      printk( "Waking CPU %d\n", cpu );
    #endif

    LEON3_IrqCtrl_Regs->mpstat = 1 << cpu;
  }

  return found_cpus;
}

void _CPU_SMP_Send_interrupt(uint32_t target_processor_index)
{
  /* send interrupt to destination CPU */
  LEON3_IrqCtrl_Regs->force[target_processor_index] = 1 << LEON3_MP_IRQ;
}

void bsp_smp_broadcast_interrupt(void)
{
  uint32_t dest_cpu;
  uint32_t cpu;
  uint32_t max_cpus;

  cpu = rtems_smp_get_current_processor();
  max_cpus = rtems_smp_get_processor_count();

  for ( dest_cpu=0 ; dest_cpu < max_cpus ; dest_cpu++ ) {
    if ( cpu != dest_cpu ) {
      _CPU_SMP_Send_interrupt( dest_cpu );
    }
  }
}