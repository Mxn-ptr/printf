#include "main.h"

/**
* _puts - print a string in stdout with a new line
* @str: string
* Return: noting
*/

void _puts(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

/**
* _putstr - print a string in stdout
* @str: string
* Return: noting
*/

void _putstr(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}
