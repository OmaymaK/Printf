#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @arg: argument
 * Return: string length
 */
int print_rev(va_list arg)
{
	char *str;
	int i, count = 0, len;

	str = va_arg(arg, char*);
	if (str == NULL)
		str = "(llun(";

	while (str[i] != '\0')
		i++;

	for (len = i - 1; len >= 0; len--)
	{
		_putchar(str[len]);
		count++;
	}
	return (count);
}
