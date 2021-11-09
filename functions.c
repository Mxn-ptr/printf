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
	int n;

	n = print_number(va_arg(s, int), 0);
	return (n);
}

int print_binary(va_list b)
{
	int n;

	n = binary(va_arg(b, int), 0);
	return (n);
}

int print_octo(va_list o)
{
	int n;

	n = octo(va_arg(o, unsigned int), 0);
	return (n);
}

int print_hex_up(va_list X)
{
	int n;

	n = hex_up(va_arg(X, unsigned int), 0);
	return (n);
}

int print_hex_low(va_list x)
{
	int n;

	n = hex_low(va_arg(x, unsigned int), 0);
	return (n);
}

int print_unsigned(va_list u)
{
	int n;

	n = print_number_u(va_arg(u, unsigned int), 0);
	return (n);
}
