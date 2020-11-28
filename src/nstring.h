/*
 * See Licensing and Copyright notice in naev.h
 */


#ifndef NSTRING_H
#  define NSTRING_H


#include <stdlib.h>
#include <string.h>

#include "ncompat.h"


const char *nstrnstr( const char *haystack, const char *needle, size_t size );
#if HAS_POSIX && defined(_GNU_SOURCE)
#define nstrcasestr     strcasestr
#define nsnprintf       snprintf
#define nstrndup        strndup
#else /* HAS_POSIX && defined(_GNU_SOURCE) */
const char *nstrcasestr( const char *haystack, const char *needle );
int nsnprintf( char *text, size_t maxlen, const char *fmt, ... );
char* nstrndup( const char *s, size_t n );
#endif /* HAS_POSIX && defined(_GNU_SOURCE) */
int strsort( const void *p1, const void *p2 );


#endif /* NSTRING_H */

