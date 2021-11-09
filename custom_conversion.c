#include "main.h"

int print_rev(va_list strings)
{
	int i, j;
	char *str;

	i = 0;
	str = va_arg(strings, char *);

	if (str == NULL)
		str = "\0";

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

	