AC_PREREQ([2.69])
AC_INIT([rtems-c-src-lib-libbsp-powerpc-qoriq],[_RTEMS_VERSION],[https://devel.rtems.org/newticket])
AC_CONFIG_SRCDIR([make/custom/qoriq_core_0.cfg])
RTEMS_TOP(../../../../../..)
RTEMS_SOURCE_TOP
RTEMS_BUILD_TOP
RTEMS_BSP_LINKCMDS

RTEMS_CANONICAL_TARGET_CPU
AM_INIT_AUTOMAKE([no-define nostdinc foreign 1.10])
RTEMS_BSP_CONFIGURE

RTEMS_PROG_CC_FOR_TARGET
RTEMS_CANONICALIZE_TOOLS
RTEMS_PROG_CCAS

RTEMS_BSPOPTS_SET_DATA_CACHE_ENABLED([*],[1])
RTEMS_BSPOPTS_HELP_DATA_CACHE_ENABLED

RTEMS_BSPOPTS_SET_INSTRUCTION_CACHE_ENABLED([*],[1])
RTEMS_BSPOPTS_HELP_INSTRUCTION_CACHE_ENABLED

RTEMS_BSPOPTS_SET([BSP_USE_DATA_CACHE_BLOCK_TOUCH],[*],[1])
RTEMS_BSPOPTS_HELP([BSP_USE_DATA_CACHE_BLOCK_TOUCH],[if defined use dcbt instruction])

RTEMS_BSPOPTS_SET([PPC_EXC_CONFIG_USE_FIXED_HANDLER],[*],[1])
RTEMS_BSPOPTS_HELP([PPC_EXC_CONFIG_USE_FIXED_HANDLER],
[use fixed high-level exception handler])

RTEMS_BSPOPTS_SET([PPC_EXC_CONFIG_BOOKE_ONLY],[*],[1])
RTEMS_BSPOPTS_HELP([PPC_EXC_CONFIG_BOOKE_ONLY],
[only support Book E exception types])

RTEMS_BSPOPTS_SET([PPC_CACHE_ALIGNMENT],[qoriq_e6500*],[64])
RTEMS_BSPOPTS_SET([PPC_CACHE_ALIGNMENT],[*],[])
RTEMS_BSPOPTS_HELP([PPC_CACHE_ALIGNMENT],[the cache alignment])

RTEMS_BSPOPTS_SET([PPC_CACHE_DATA_L1_SIZE],[*],[(32 * 1024)])
RTEMS_BSPOPTS_HELP([PPC_CACHE_DATA_L1_SIZE],[the L1 data cache size])

RTEMS_BSPOPTS_SET([PPC_CACHE_DATA_L2_SIZE],[qoriq_e6500*],[(2048 * 1024)])
RTEMS_BSPOPTS_SET([PPC_CACHE_DATA_L2_SIZE],[*],[(256 * 1024)])
RTEMS_BSPOPTS_HELP([PPC_CACHE_DATA_L2_SIZE],[the L2 data cache size])

RTEMS_BSPOPTS_SET([PPC_CACHE_INSTRUCTION_L1_SIZE],[*],[(32 * 1024)])
RTEMS_BSPOPTS_HELP([PPC_CACHE_INSTRUCTION_L1_SIZE],[the L1 instruction cache size])

RTEMS_BSPOPTS_SET([PPC_CACHE_INSTRUCTION_L2_SIZE],[qoriq_e6500*],[(2048 * 1024)])
RTEMS_BSPOPTS_SET([PPC_CACHE_INSTRUCTION_L2_SIZE],[*],[(256 * 1024)])
RTEMS_BSPOPTS_HELP([PPC_CACHE_INSTRUCTION_L2_SIZE],[the L2 instruction cache size])

RTEMS_BSPOPTS_SET([BSP_CONSOLE_BAUD],[*],[115200])
RTEMS_BSPOPTS_HELP([BSP_CONSOLE_BAUD],[default baud for console and other serial devices])

RTEMS_BSPOPTS_SET([BSP_USE_UART_INTERRUPTS],[*],[1])
RTEMS_BSPOPTS_HELP([BSP_USE_UART_INTERRUPTS],[enable usage of interrupts for the UART modules])

RTEMS_BSPOPTS_SET([BSP_FDT_BLOB_SIZE_MAX],[*],[262144])
RTEMS_BSPOPTS_HELP([BSP_FDT_BLOB_SIZE_MAX],[maximum size of the FDT blob in bytes])

RTEMS_BSPOPTS_SET([BSP_FDT_BLOB_READ_ONLY],[*],[1])
RTEMS_BSPOPTS_HELP([BSP_FDT_BLOB_READ_ONLY],[place the FDT blob into the read-only data area])

RTEMS_BSPOPTS_SET([QORIQ_CPU_COUNT],[qoriq_e6500*],[24])
RTEMS_BSPOPTS_SET([QORIQ_CPU_COUNT],[*],[2])
RTEMS_BSPOPTS_HELP([QORIQ_CPU_COUNT],[maximum virtual processor count])

RTEMS_BSPOPTS_SET([QORIQ_PHYSICAL_THREAD_COUNT],[qoriq_e6500*],[2])
RTEMS_BSPOPTS_SET([QORIQ_PHYSICAL_THREAD_COUNT],[*],[1])
RTEMS_BSPOPTS_HELP([QORIQ_PHYSICAL_THREAD_COUNT],[the number of threads per core])

RTEMS_BSPOPTS_SET([QORIQ_ETSEC_1_PHY_ADDR],[*],[-1])
RTEMS_BSPOPTS_HELP([QORIQ_ETSEC_1_PHY_ADDR],[PHY address for eTSEC interface 1])

RTEMS_BSPOPTS_SET([QORIQ_ETSEC_2_PHY_ADDR],[*],[0])
RTEMS_BSPOPTS_HELP([QORIQ_ETSEC_2_PHY_ADDR],[PHY address for eTSEC interface 2])

RTEMS_BSPOPTS_SET([QORIQ_ETSEC_3_PHY_ADDR],[*],[1])
RTEMS_BSPOPTS_HELP([QORIQ_ETSEC_3_PHY_ADDR],[PHY address for eTSEC interface 3])

RTEMS_BSPOPTS_SET([QORIQ_UART_0_ENABLE],[qoriq_core_1],[0])
RTEMS_BSPOPTS_SET([QORIQ_UART_0_ENABLE],[*],[1])
RTEMS_BSPOPTS_HELP([QORIQ_UART_0_ENABLE],[use 1 to enable UART 0, otherwise use 0])

RTEMS_BSPOPTS_SET([QORIQ_UART_1_ENABLE],[qoriq_core_1],[0])
RTEMS_BSPOPTS_SET([QORIQ_UART_1_ENABLE],[*],[1])
RTEMS_BSPOPTS_HELP([QORIQ_UART_1_ENABLE],[use 1 to enable UART 1, otherwise use 0])

RTEMS_BSPOPTS_SET([QORIQ_UART_BRIDGE_MASTER_CORE],[*],[0])
RTEMS_BSPOPTS_HELP([QORIQ_UART_BRIDGE_MASTER_CORE],[UART to Intercom bridge master core index])

RTEMS_BSPOPTS_SET([QORIQ_UART_BRIDGE_SLAVE_CORE],[*],[1])
RTEMS_BSPOPTS_HELP([QORIQ_UART_BRIDGE_SLAVE_CORE],[UART to Intercom bridge slave core index])

RTEMS_BSPOPTS_SET([QORIQ_UART_BRIDGE_TASK_PRIORITY],[*],[250])
RTEMS_BSPOPTS_HELP([QORIQ_UART_BRIDGE_TASK_PRIORITY],[UART to Intercom bridge task priority])

RTEMS_BSPOPTS_SET([QORIQ_UART_BRIDGE_0_ENABLE],[*],[0])
RTEMS_BSPOPTS_HELP([QORIQ_UART_BRIDGE_0_ENABLE],[use 1 to enable UART 0 to Intercom bridge, otherwise use 0])

RTEMS_BSPOPTS_SET([QORIQ_UART_BRIDGE_1_ENABLE],[qoriq_core_0],[1])
RTEMS_BSPOPTS_SET([QORIQ_UART_BRIDGE_1_ENABLE],[qoriq_core_1],[1])
RTEMS_BSPOPTS_SET([QORIQ_UART_BRIDGE_1_ENABLE],[*],[0])
RTEMS_BSPOPTS_HELP([QORIQ_UART_BRIDGE_1_ENABLE],[use 1 to enable UART 1 to Intercom bridge, otherwise use 0])

RTEMS_BSPOPTS_SET([BSP_INTERRUPT_STACK_AT_WORK_AREA_BEGIN],[*],[1])
RTEMS_BSPOPTS_HELP([BSP_INTERRUPT_STACK_AT_WORK_AREA_BEGIN],[indicate that the interrupt stack is at the work area begin])

RTEMS_BSPOPTS_SET([QORIQ_INTERCOM_AREA_BEGIN],[*],[0x3000000])
RTEMS_BSPOPTS_HELP([QORIQ_INTERCOM_AREA_BEGIN],[inter-processor communication area begin])
RTEMS_BSPOPTS_SET([QORIQ_INTERCOM_AREA_SIZE],[*],[0x1000000])
RTEMS_BSPOPTS_HELP([QORIQ_INTERCOM_AREA_SIZE],[inter-processor communication area size])

RTEMS_BSPOPTS_SET([QORIQ_TLB1_ENTRY_COUNT],[qoriq_e6500*],[64])
RTEMS_BSPOPTS_SET([QORIQ_TLB1_ENTRY_COUNT],[*],[16])
RTEMS_BSPOPTS_HELP([QORIQ_TLB1_ENTRY_COUNT],[TLB1 entry count])

RTEMS_BSPOPTS_SET([QORIQ_INITIAL_HID0],[qoriq_e6500*],[0x40000000])
RTEMS_BSPOPTS_SET([QORIQ_INITIAL_HID0],[*],[])
RTEMS_BSPOPTS_HELP([QORIQ_INITIAL_HID0],[initial HID0 value (EN_L2MMU_MHD is set by default on the T-series)])

RTEMS_BSPOPTS_SET([QORIQ_INITIAL_MSR],[qoriq_e6500_64*],[0x82002200])
RTEMS_BSPOPTS_SET([QORIQ_INITIAL_MSR],[qoriq_e6500_32*],[0x02002200])
RTEMS_BSPOPTS_SET([QORIQ_INITIAL_MSR],[*],[0x02000200])
RTEMS_BSPOPTS_HELP([QORIQ_INITIAL_MSR],[initial MSR value])

RTEMS_BSPOPTS_SET([QORIQ_INITIAL_SPEFSCR],[qoriq_e6500*],[])
RTEMS_BSPOPTS_SET([QORIQ_INITIAL_SPEFSCR],[*],[0x00000000])
RTEMS_BSPOPTS_HELP([QORIQ_INITIAL_SPEFSCR],[initial SPEFSCR value])

RTEMS_BSPOPTS_SET([QORIQ_INITIAL_BUCSR],[qoriq_e6500*],[0x01400201])
RTEMS_BSPOPTS_SET([QORIQ_INITIAL_BUCSR],[*],[])
RTEMS_BSPOPTS_HELP([QORIQ_INITIAL_BUCSR],[initial BUCSR value])

RTEMS_BSPOPTS_SET([QORIQ_MMU_DEVICE_MAS7],[qoriq_e6500*],[0xf])
RTEMS_BSPOPTS_SET([QORIQ_MMU_DEVICE_MAS7],[*],[0x0])
RTEMS_BSPOPTS_HELP([QORIQ_MMU_DEVICE_MAS7],[MAS7 value for device TLB1 entries])

RTEMS_BSPOPTS_SET([QORIQ_HAS_HYPERVISOR_MODE],[qoriq_e6500*],[1])
RTEMS_BSPOPTS_SET([QORIQ_HAS_HYPERVISOR_MODE],[*],[])
RTEMS_BSPOPTS_HELP([QORIQ_HAS_HYPERVISOR_MODE],[defined if the processor core has a hypervisor mode])

RTEMS_BSPOPTS_SET([QORIQ_IS_HYPERVISOR_GUEST],[*],[])
RTEMS_BSPOPTS_HELP([QORIQ_IS_HYPERVISOR_GUEST],[defined if we are a hypervisor guest])

RTEMS_BSPOPTS_SET([QORIQ_CLOCK_TIMER],[qoriq_core_1],[4])
RTEMS_BSPOPTS_SET([QORIQ_CLOCK_TIMER],[*],[0])
RTEMS_BSPOPTS_HELP([QORIQ_CLOCK_TIMER],[global timer used for system clock, 0..3 maps to A0..A3, and 4..7 maps to B0..B3])

RTEMS_BSPOPTS_SET([QORIQ_CLOCK_TIMECOUNTER],[qoriq_core_1],[5])
RTEMS_BSPOPTS_SET([QORIQ_CLOCK_TIMECOUNTER],[*],[1])
RTEMS_BSPOPTS_HELP([QORIQ_CLOCK_TIMECOUNTER],[global timer used for the timecounter, 0..3 maps to A0..A3, and 4..7 maps to B0..B3])

RTEMS_BSPOPTS_SET([QORIQ_CHIP_NUMBER],[qoriq_e6500*],[0])
RTEMS_BSPOPTS_SET([QORIQ_CHIP_NUMBER],[*],[1020])
RTEMS_BSPOPTS_HELP([QORIQ_CHIP_NUMBER],[chip number, e.g. 1020, 2040, 2080, 4240])

RTEMS_BSPOPTS_SET([QORIQ_CHIP_SERIES],[qoriq_e6500*],[\'T\'])
RTEMS_BSPOPTS_SET([QORIQ_CHIP_SERIES],[*],[\'P\'])
RTEMS_BSPOPTS_HELP([QORIQ_CHIP_SERIES],[chip series, e.g. 'P' or 'T'])

RTEMS_BSPOPTS_SET([QORIQ_BUS_CLOCK_DIVIDER],[qoriq_e6500*],[2])
RTEMS_BSPOPTS_SET([QORIQ_BUS_CLOCK_DIVIDER],[*],[1])
RTEMS_BSPOPTS_HELP([QORIQ_BUS_CLOCK_DIVIDER],[divider of the platform clock to get the clock most on-chip peripherals])

RTEMS_CHECK_NETWORKING
AM_CONDITIONAL(HAS_NETWORKING,test "$HAS_NETWORKING" = "yes")

RTEMS_CHECK_SMP
AM_CONDITIONAL(HAS_SMP,[test "$rtems_cv_HAS_SMP" = "yes"])

RTEMS_BSP_CLEANUP_OPTIONS
RTEMS_PPC_EXCEPTIONS

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
