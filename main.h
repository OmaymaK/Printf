#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct printf - structure to chose the format to be printed
 * @ch: The character
 * @func: The function associated to that character
 */
typedef struct printf
{
	char ch;
	int (*func)(va_list);
} printf_t;

/* functions prototype*/

int _putchar(char c);
int _printf(const char *type, ...);
int format_check(const char s, va_list ap);

/* Created functions prototype */
int print_r(va_list arg);
int print_p(va_list arg);
int print_X(va_list arg);
int print_x(va_list arg);
int print_octal(va_list arg);
int print_unsigned(va_list arg);
int print_binary(va_list arg);
int print_int(va_list arg);
int print_char(va_list arg);
int print_string(va_list arg);
int print_perc(va_list arg);
#endif
