#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct printf - structure to chose the format to be printed
 * @ch: The character  
 * @func: The function associated to that character
 */
{
	char ch;
	int (*func)(va_list);
} printf_t;

/* functions prototype */

int _printf(const char *format, ...);
int _putchar(char c);

/* Created functions prototype */

int print_char(va_list arg);
int print_string(va_list arg);
int print_perc(va_list arg);
#endif
