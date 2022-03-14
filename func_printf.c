#include "main.h"
/**
 * print_char - prints character
 * @arg: the character to be printed
 * Return: 1
 */
int print_char(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}
/**
 * print_string - prints the string
 * @arg: the string to be printed
 * Return: length of the string
 */     
int print_string(va_list arg)
{
	int i = 0;
	char *s = va_arg(arg, char*);
	
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
/**
 * print_perc - prints percentage
 * @arg: attribute unused
 * Return: 1
 */
int print_perc(va_list arg __attribute__((unused)))
{
	_putchar('%');
	return (1);
}
