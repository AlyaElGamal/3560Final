    #include <stdlib.h>
     #include <stdio.h>
     #include <stdarg.h>
//include for testing
     #include "gtest/gtest.h"
     #include "wc.c"

static void error_print (int perr, char *fmt, va_list ap);
static void errf (char *fmt, ...);
static void perrf (char *fmt, ...);
void report (char *file, count_t ccount, count_t wcount, count_t lcount);
static int isword (unsigned char c);
int getword (FILE *fp);
unsigned long counter (char *file);

