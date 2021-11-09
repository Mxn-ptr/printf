#include "main.h"

/**
 * print_rev - prints the string in reverse
 * @strings: va_list
 * Return: size of the string
 */

int print_rev(va_list strings)
{
	int i, j;
	char *str;

	i = 0;
	str = va_arg(strings, char *);

	if (str == NULL)
	{
		str = "r%";
	}

	while (str[i])
		i++;

	j = i - 1;

	while (j >= 0)
	{
		_putchar(str[j]);
		j--;
	}
	return (i);
}

/**
* print_rot13 - crypt a string in rot13
* @s: string
* Return: length of the string
*/
int print_rot13(va_list s)
{
	int i;
	int j;
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str = va_arg(s, char *);

	for (i = 0; str[i]; i++)
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			_putchar(str[i]);
		else
		{
			for (j = 0; j <= 52; j++)
			{
				if (str[i] == input[j])
					_putchar(output[j]);
			}
		}
	}
	return (i);
}
