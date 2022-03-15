#include "main.h"
/**
 * print_unsigned - function that prints an unsigned integer
 * @arg: argument
 * Return: number of elements printed
 */
int print_unsigned(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	unsigned int len = 0, rest = 1;
	unsigned int n = num;

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
 * print_octal - function that prints numbers in base octal
 * @arg: argument
 * Return: number of elements printed
 */
int print_octal(va_list arg)
{
	unsigned int oct[11];
	unsigned int len = 0, num = 0;
	int i = 0;

	num = va_arg(arg, unsigned int);
	if (num == 0)
	{
		_putchar(0 + '0');
		len++;
	}
	while (num > 0)
	{
		oct[i] = (num % 8);
		num = num / 8;
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(oct[i] + '0');
		len++;
	}
	return (len);
}
/**
 * print_x - prints numbers in Hexadecimal using lowercase characters
 * @arg: argument
 * Return: number of element printed
 */
int print_x(va_list arg)
{
	char hex[20];
	unsigned int len = 0, num = 0;
	int i = 0;

	num = va_arg(arg, unsigned int);
	if (num == 0)
	{
		_putchar(0 + '0');
		len++;
	}
	while (num > 0)
	{
		if (num % 16 >= 10 && num % 16 <= 15)
			hex[i] = (87 + num % 16);

		else
			hex[i] = ('0' + num % 16);
		num = num / 16;
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(hex[i]);
		len++;
	}
	return (len);
}
/**
 * print_X - prints numbers in Hexadecimal using uppercase characters
 * @arg: argument
 * Return: number of element printed
 */
int print_X(va_list arg)
{
	char hex[20];
	unsigned int len = 0, num = 0;
	int i = 0;

	num = va_arg(arg, unsigned int);
	if (num == 0)
	{
		_putchar(0 + '0');
		len++;
	}
		while (num > 0)
	{
		if (num % 16 >= 10 && num % 16 <= 15)
			hex[i] = (55 + num % 16);
		else
			hex[i] = ('0' + num % 16);
		num = num / 16;
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(hex[i]);
		len++;
	}
	return (len);
}
/**
 * print_p - prints a string and returns the length of string
 * @arg: arguments
 * Return: number of printed characters
 */
int print_p(va_list arg)
{
	unsigned long hex[20], n = 0;
	unsigned int len = 0;
	int i = 0;

	n = va_arg(arg, unsigned long);
	if (n == 0)
	{
		_putchar('(');
		_putchar('n');
		_putchar('i');
		_putchar('l');
		_putchar(')');
		len += 5;
	}
	else if (n > 0)
	{
	_putchar('0');
	_putchar('x');
	len += 2;
	}
	while (n > 0)
	{
		if (n % 16 >= 10 && n % 16 <= 15)
			hex[i] = 87 + (n % 16);
		else
		{
			hex[i] = 48 + (n % 16);
			n = n / 16;
			i++;
		}
		for (i = i - 1; i >= 0; i--)
		{
			_putchar(hex[i]);
			len++;
		}
	}
	return (len);
}
