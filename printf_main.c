#include "main.h"
/**
 * _printf - prints everything (printf)
 * @format: checks the type to be printed
 * Return: len
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0;
	int len = 0;
	int func = 0;

	va_start(arg, format);
	if (!format || (format[0] == '%' && format[1] == '\0'))
	return (-1);
	while (*(format + i) && format)
	{
		if (*(format + i) != '%')
		{
			_putchar (*(format + i));
			len++;
		}
		if (*(format + i) == '%')
		{
			func = format_check(*(format + (i + 1)), arg);
				len = len + func;
				i = i + 2;
				continue;
			if (*(format + (i + 1)) == '\0')
			{
				_putchar(*(format + i));
				len++;
			}
		}
			i++;
	}
	va_end(arg);
	return (len);
}
