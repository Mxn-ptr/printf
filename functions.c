#include "main.h"

/* FONCTION POUR PRINT UN CHAR */
/**
 * print_char - print a char
 * @c: char to print
 */

int print_char(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}

/* FONCTION POUR PRINT UN STRING */
/**
 * print_string - print a string
 * @str: string to print
 */

int print_string(va_list s)
{
	int i;
	char *str;

	i = 0;
	str = va_arg(s, char *);
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i - 1);
}

int print_int(va_list s)
{
	int n = 0;

	print_number(va_arg(s, int), &n);
	return (n);
}

int print_binary(va_list b)
{
	int n = 0;

	binary(va_arg(b, int), &n);
	return (n);
}

int print_octo(va_list o)
{
	int n = 0;

	octo(va_arg(o, unsigned int), &n);
	return (n);
}

int print_hex_up(va_list X)
{
	int n = 0;

	hex_up(va_arg(X, unsigned int), &n);
	return (n);
}

int print_hex_low(va_list x)
{
	int n = 0;

	hex_low(va_arg(x, unsigned int), &n);
	return (n);
}

int print_unsigned(va_list u)
{
	unsigned int n = 0;

	print_number_u(va_arg(u, unsigned int), &n);
	return (n);
}
