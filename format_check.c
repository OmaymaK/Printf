#include "main.h"
/**
 * format_check - checks the format according to the input
 * @s: refers to string format
 * @ap: argument
 * Return: length of string or 1 or 0 or -1 if error
 */
int format_check(const char s, va_list ap)
{
	int i = 0;
	int len = 0;

	printf_t cha[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_perc},
	};
	while (cha[i].ch != 0)
	{
		if (cha[i].ch == s)
		{
			len = len + cha[i].func(ap);
			return (len);
		}
		i++;
	}
	return (0);
}
