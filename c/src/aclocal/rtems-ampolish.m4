# $Id$

AC_DEFUN([RTEMS_AMPOLISH3],
[
AC_PATH_PROG([PERL],[perl],[])
AC_SUBST(AMPOLISH3,["\$(PERL) ${ac_aux_dir}/ampolish3"])
AM_CONDITIONAL([AMPOLISH3],
[test x"$USE_MAINTAINER_MODE" = x"yes" \
  && test -n "${PERL}"])
])

