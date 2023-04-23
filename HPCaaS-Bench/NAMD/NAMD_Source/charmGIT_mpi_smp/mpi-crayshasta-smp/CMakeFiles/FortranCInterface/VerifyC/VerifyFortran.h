#ifndef FortranCInterface_HEADER_INCLUDED
#define FortranCInterface_HEADER_INCLUDED

/* Mangling for Fortran global symbols without underscores. */
#define FortranCInterface_GLOBAL(name,NAME) name##_

/* Mangling for Fortran global symbols with underscores. */
#define FortranCInterface_GLOBAL_(name,NAME) name##_

/*--------------------------------------------------------------------------*/
/* Mangle some symbols automatically.                                       */
#define VerifyFortran FortranCInterface_GLOBAL(verifyfortran, VERIFYFORTRAN)

#endif
