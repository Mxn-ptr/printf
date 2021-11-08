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
	int i;

	str = va_arg(s, char *);
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
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
