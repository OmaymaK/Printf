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

	if (s == NULL)
		s = "(null)";
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
/**
 * print_int - prints integer
 * @arg: the integer to print
 * Return: number of printed numbers
 */
int print_int(va_list arg)
{
	unsigned int num = va_arg(arg, int);
	int len = 0, rest = 1;
	int n = num;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		len++;
	}
	while ((n / rest) > 9)
	{
		rest = rest * 10;
	}
	while (rest > 0)
	{
		_putchar (n / rest + '0');
		n = (n % rest);
		rest = rest / 10;
		len++;
	}
	return (len);
}
/**
 * print_binary - convert an integer to binary
 * @arg: arguments
 * Return: number of printed elements (len)
 */
int print_binary(va_list arg)
{
	unsigned int b[32];
	int i = 0;
	unsigned int num = 0, len = 0;

	num = va_arg(arg, unsigned int);
	if (num <= 1)
	{
		_putchar(num + '0');
		len++;
	}
	else
	{
		while (num > 0)
		{
			b[i] = num % 2;
			num = num / 2;
			i++;
		}
		for (i = i - 1; i >= 0; i--)
		{
			_putchar(b[i] + '0');
			len++;
		}
	}
	return (len);
}
