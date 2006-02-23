#ifndef _PORT_H
#define _PORT_H

#if defined(WIN32) && defined(_MSC_VER)
#	include <direct.h>
#	include <getopt.h>
#	define inline __inline
#else
#	include <unistd.h>
#endif
#if defined(__GNUC__)
#	define inline __inline__
#endif 

#define countof(a)	   ( sizeof(a)/sizeof(*a) )

#endif /* _PORT_H */

