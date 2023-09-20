	/*--------------------------------------------------------------------------
STDIO.H

Prototypes for standard I/O functions for ARM CA Version 1.
Copyright (c) 1995-2004 Keil Elektronik GmbH and Keil Software, Inc.
All rights reserved.
--------------------------------------------------------------------------*/

#ifndef __STDIO_H__
#define __STDIO_H__

#ifdef __cplusplus
extern "C"  {
#endif

#ifndef EOF
 #define EOF -1
#endif

#ifndef NULL
 #define NULL ((void *) 0)
#endif

#ifndef __SIZE_T__
#define __SIZE_T__
 typedef unsigned int size_t;
#endif

extern int  _getkey  (void);
extern int  getchar  (void);
extern int  ungetchar(int  c);
extern int  putchar  (int  c);
extern int  printf   (const char *fmt, ...); 
extern char *gets    (char *s, unsigned int n);
extern int  scanf    (const char *fmt, ...);
extern int  vprintf  (const char *fmt, char *parm);
extern int  puts     (const char *s);
extern int  sprintf  (char *buf, const char *fmt, ...);
extern int  vsprintf (char *buf, const char *fmt, char *parm);
extern int  sscanf   (const char *buf, const char *fmt, ...);

#ifdef __cplusplus
}
#endif


#endif
