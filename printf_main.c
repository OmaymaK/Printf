#include "main.h"
/**
 * _printf - prints everything (printf)
 * @type: checks the type to be printed
 * Return: len
 */
int _printf(const char *type, ...)
{
	va_list arg;
	int i = 0;
	int len = 0;
	int func = 0;

	if (type == NULL)
		return (-1);
	va_start(arg, type);
	if (arg == NULL)
		return (-1);
	if (!type || (type[0] == '%' && type[1] == '\0'))
	return (-1);
	while (*(type + i) && type)
	{
		if (*(type + i) != '%')
		{
			_putchar (*(type + i));
			len++;
		}
		if (*(type + i) == '%')
		{
			func = format_check(*(type + (i + 1)), arg);
			if (func != 0)
			{
				len = len + func;
				i = i + 2;
				continue;
			}
			if (*(type + (i + 1)) == '\0')
			{
				_putchar(*(type + i));
				len++;
			}
		}
			i++;
	}
	va_end(arg);
	return (len);
}
