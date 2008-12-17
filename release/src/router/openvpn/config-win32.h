/*
 *  OpenVPN -- An application to securely tunnel IP networks
 *             over a single UDP port, with support for SSL/TLS-based
 *             session authentication and key exchange,
 *             packet encryption, packet authentication, and
 *             packet compression.
 *
 *  Copyright (C) 2002-2008 OpenVPN Technologies, Inc. <sales@openvpn.net>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2
 *  as published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program (see the file COPYING included with this
 *  distribution); if not, write to the Free Software Foundation, Inc.,
 *  59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/*
 * Configuration header for Win32 using the mingw environment.
 * Manually edited based on linux version as generated by autoconf.
 *
 * config-win32.h is normally generated by copying
 * config-win32.h.in -> config-win32.h and replacing
 * [ampersand] VERSION [ampersand]
 * with the appropriate version #.  This is normally
 * done automatically by configure.ac
 */

#include <windows.h>
#include <winsock2.h>
#include "autodefs/defs.h"

#define sleep(x) Sleep((x)*1000)

#define random rand
#define srandom srand

typedef unsigned long in_addr_t;

#ifndef _SSIZE_T_
#define _SSIZE_T_
 typedef unsigned int ssize_t;
#endif

/* Append a label to program startup title */
/*#define DEBUG_LABEL "DEBUG1"*/

/* Should we print debug info from driver? */
#ifdef PRODUCT_TAP_DEBUG
#define TAP_WIN32_DEBUG
#endif

/*
 * Minimum TAP-Win32 version number expected by userspace
 *
 * The TAP-Win32 version number is defined in tap-win32/SOURCES
 */
#define TAP_ID tap0901
#define TAP_WIN32_MIN_MAJOR 9
#define TAP_WIN32_MIN_MINOR 1

/* Enable client/server capability */
#define ENABLE_CLIENT_SERVER 1

/* Enable client capability only */
/* #undef ENABLE_CLIENT_ONLY */

/* Enable management server capability */
#define ENABLE_MANAGEMENT 1

/* Enable PKCS#11 support */
#define USE_PKCS11 1

/* Enable HTTP proxy support */
#define ENABLE_HTTP_PROXY 1

/* Enable Socks proxy support */
#define ENABLE_SOCKS 1

/* Enable internal fragmentation support */
#define ENABLE_FRAGMENT 1

/* Enable smaller executable size */
/* #undef ENABLE_SMALL */

/* Enable debugging support */
#define ENABLE_DEBUG 1

/* if defined, will allow usage of the --plugin directive */
#define USE_LOAD_LIBRARY

/* Dimension size to use for empty array declaration */
#define EMPTY_ARRAY_SIZE 0

/* Define to 1 if you have the `getsockname' function. */
#define HAVE_GETSOCKNAME 1

/* Define to 1 if you have the <openssl/engine.h> header file. */
#define HAVE_OPENSSL_ENGINE_H 1

/* Define to 1 if you have the `ENGINE_load_builtin_engines' function. */
#define HAVE_ENGINE_LOAD_BUILTIN_ENGINES 1

/* Define to 1 if you have the `ENGINE_register_all_complete' function. */
#define HAVE_ENGINE_REGISTER_ALL_COMPLETE 1

/* Define to 1 if you have the `ENGINE_cleanup' function. */
#define HAVE_ENGINE_CLEANUP 1

/* gettimeofday() is implemented in otime.c for Windows */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the 'chsize' function. */
#define HAVE_CHSIZE 1

/* Define to 1 if you have the `chdir' function. */
#define HAVE_CHDIR 1

/* Define to 1 if your compiler supports GNU GCC-style variadic macros */
#ifndef _MSC_VER /* Defines MSFT compiler version. Defined as 1200 for MSVC++ 6.0. */
#define HAVE_CPP_VARARG_MACRO_GCC 1
#endif

/* Define to 1 if you have the <ctype.h> header file. */
#define HAVE_CTYPE_H 1

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the `EVP_CIPHER_CTX_set_key_length' function. */
#define HAVE_EVP_CIPHER_CTX_SET_KEY_LENGTH 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `getsockopt' function. */
#define HAVE_GETSOCKOPT 1

/* Define to 1 if you have the `inet_ntoa' function. */
#define HAVE_INET_NTOA 1

/* Define to 1 if your system has a GNU libc compatible `malloc' function, and
   to 0 otherwise. */
#define HAVE_MALLOC 1

/* Define to 1 if you have the `memset' function. */
#define HAVE_MEMSET 1

/* Define to 1 if you have the `setsockopt' function. */
#define HAVE_SETSOCKOPT 1

/* Define to 1 if you have the `socket' function. */
#define HAVE_SOCKET 1

/* Define to 1 if you have the <stdarg.h> header file. */
#define HAVE_STDARG_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#ifndef _MSC_VER
#define HAVE_STDINT_H 1
#endif

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `system' function. */
#define HAVE_SYSTEM 1

/* Define to 1 if you have the <sys/file.h> header file. */
#ifndef _MSC_VER
#define HAVE_SYS_FILE_H 1
#endif

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#ifndef _MSC_VER
#define HAVE_SYS_TIME_H 1
#endif

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the `time' function. */
#define HAVE_TIME 1

/* Define to 1 if you have the <unistd.h> header file. */
#ifndef _MSC_VER
#define HAVE_UNISTD_H 1
#endif

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Special Windows version of getpass() defined in io.c */
#define HAVE_GETPASS 1

/* Name of package */
#define PACKAGE openvpn

/* Define to the address where bug reports for this package should be sent. */
//#define PACKAGE_BUGREPORT "openvpn-users@lists.sourceforge.net"

/* Define to the full name of this package. */
#define PACKAGE_NAME OpenVPN

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME openvpn

/* Define to the version of this package. */
#define PACKAGE_VERSION 2.1_rc13

/* Define to the full name and version of this package. */
#ifdef DEBUG_LABEL
#define PACKAGE_STRING PACKAGE_NAME " " PACKAGE_VERSION " " DEBUG_LABEL
#else
#define PACKAGE_STRING PACKAGE_NAME " " PACKAGE_VERSION
#endif

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* The size of a `unsigned int', as computed by sizeof. */
#define SIZEOF_UNSIGNED_INT 4

/* The size of a `unsigned long', as computed by sizeof. */
#define SIZEOF_UNSIGNED_LONG 4

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* A string representing our target */
#ifdef _MSC_VER
#define TARGET_ALIAS "Win32-MSVC++"
#else
#define TARGET_ALIAS "Win32-MinGW"
#endif

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#ifndef _MSC_VER
#define TIME_WITH_SYS_TIME 1
#endif

/* Use OpenSSL crypto library */
#define USE_CRYPTO 1

/* Use LZO compression library */
#define USE_LZO 1

/* LZO version number */
#define LZO_VERSION_NUM "2"

/* Use lzo/ directory prefix for LZO header files (for LZO 2.0) */
#define LZO_HEADER_DIR 1

/* Use OpenSSL SSL library */
#define USE_SSL 1

/* Version number of package */
#define VERSION PACKAGE_VERSION

/* Define as `__inline' if that's what the C compiler calls it, or to nothing
   if it is not supported. */
#define inline __inline

/* type to use in place of socklen_t if not defined */
#define socklen_t unsigned int

/* 32-bit unsigned type */
#define uint32_t unsigned int

/* 16-bit unsigned type */
#define uint16_t unsigned short

/* 8-bit unsigned type */
#define uint8_t unsigned char

/* Route command */
#define ROUTE_PATH "route"

/* Windows doesn't support PTHREAD yet */
#ifdef USE_PTHREAD
#error The Windows version of OpenVPN does not support PTHREAD yet
#endif

#ifdef _MSC_VER
/* MSVC++ hacks */
#include <io.h>
#include <direct.h>
#define vsnprintf _vsnprintf
#define vsnwprintf _vsnwprintf
#define snwprintf _snwprintf
#define write _write
#define open _open
#define read _read
#define close _close
#define chdir _chdir
#define S_IRUSR 0
#define S_IWUSR 0
typedef int intptr_t;
#undef S_NORMAL
/* Visual Studio 2005 supports vararg macros */
#if _MSC_VER >= 1400
#define HAVE_CPP_VARARG_MACRO_ISO 1
#endif
#endif