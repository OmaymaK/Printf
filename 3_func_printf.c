#include "main.h"
/**
 * print_r - prints a string in reverse
 * @arg: argument
 * Return: string length
 */
int print_r(va_list arg)
{
	char *s;
	int i, len = 0;

	s = va_arg(arg, char*);
	if (s == NULL)
		s = "(llun(";

	while (s[i] != '\0')
		i++;

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
		len++;
	}
	return (len);
}
