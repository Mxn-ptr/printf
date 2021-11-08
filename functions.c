#include "main.h"

/* FONCTION POUR PRINT UN CHAR */
/**
 * print_char - print a char
 * @c: char to print
 */

void print_char(va_list c)
{
	_putchar(va_arg(c, int));
}

/* FONCTION POUR PRINT UN STRING */
/**
 * print_string - print a string
 * @str: string to print
 */

void print_string(va_list s) 
{
	char *str;

	str = va_arg(s, char *);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}

void print_int(va_list s)
{
	int n;

	n = va_arg(s, int);

	print_number(n);
}

void print_binary(va_list b)
{
	binary(va_arg(b, int));
}

void print_octo(va_list o)
{
	octo(va_arg(o, int));
}

void print_hex_up(va_list X)
{
	hex_up(va_arg(X, int));
}

void print_hex_low(va_list x)
{
	hex_low(va_arg(x, int));
}

void print_unsigned(va_list u)
{
	print_number_u(va_arg(u, unsigned int));
}
