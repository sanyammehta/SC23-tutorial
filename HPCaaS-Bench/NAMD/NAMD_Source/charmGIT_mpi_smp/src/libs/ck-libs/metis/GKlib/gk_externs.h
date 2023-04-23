/*!
\file gk_externs.h
\brief This file contains definitions of external variables created by GKlib

\date   Started 3/27/2007
\author George
\version\verbatim $Id: gk_externs.h 10711 2011-08-31 22:23:04Z karypis $ \endverbatim

This file in metis was modified by Kavitha Chandrasekar at UIUC
*/

#ifndef _GK_EXTERNS_H_
#define _GK_EXTERNS_H_


/*************************************************************************
* Extern variable definition. Hopefully, the __thread makes them thread-safe.
**************************************************************************/
#ifndef _GK_ERROR_C_
/* declared in error.c */
extern CMK_THREADLOCAL int gk_cur_jbufs;
extern CMK_THREADLOCAL jmp_buf gk_jbufs[];
extern CMK_THREADLOCAL jmp_buf gk_jbuf;

#endif

#endif
