#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/* functions prototype */

int _printf(const char *format, ...);
int _putchar(char c);

/* Created functions prototype */

int print_char(va_list arg);
int print_string(va_list arg);
int print_perc(va_list arg);
#endif
