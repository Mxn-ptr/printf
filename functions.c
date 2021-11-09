#include "main.h"

/* FONCTION POUR PRINT UN CHAR */
/**
 * print_char - print a char
 * @c: char to print
 * Return: 1
 */

int print_char(va_list list)
{	
	char c = 0;

	c = va_arg(list, int);
		_putchar(c);
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
	char *str = NULL;

	i = 0;
	if ((str = va_arg(s, char *)) == NULL)
	{
		_putstr("(null)");
		return (6);
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
	print_number(nb, &n);
	return (n);
}
