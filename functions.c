#include "main.h"

/* FONCTION POUR PRINT UN CHAR */
/**
 * print_char - print a char
 * @c: char to print
 * Return: 1
 */

int print_char(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}

/* FONCTION POUR PRINT UN STRING */
/**
 * print_string - print a string
 * @s: string to print
 * Return: i - 1
 */

int print_string(va_list s)
{
	int i;
	char *str;

	i = 0;
	str = va_arg(s, char *);
	if (str == NULL)
	{
		_putstr("(null)");
		return (5);
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i - 1);
}

/**
 * print_int - print an int
 * @s: va_list for printf
 * Return: number to print
 */

int print_int(va_list s)
{
	int n = 0;
	int nb;

	nb = va_arg(s, int);
	if (nb == 0)
	{
		_putchar('0');
		return (0);
	}

	print_number(nb, &n);
	return (n);
}
