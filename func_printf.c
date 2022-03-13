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
<<<<<<< HEAD
	char *s = va_arg(arg, char *);
=======
	char *s = va_arg(arg, char*);

>>>>>>> dd2610b4e5f7337488281dcff3ae0c50ec77d9ed
	while (s[i] != '\0')
	{
		_putchar(*s);
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
<<<<<<< HEAD
	void(arg);
		_putchar('%');
=======
	_putchar('%');
>>>>>>> dd2610b4e5f7337488281dcff3ae0c50ec77d9ed
	return (1);
}
