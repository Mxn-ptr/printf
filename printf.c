#include "main.h"

int _printf(const char *format, ...)
{
	va_list argument;
	int i, j;
	format_t symbole[] = {
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		{'i', print_int},
		{'b', print_binary},
		{'o', print_octo},
		{'x', print_hex_low},
		{'X', print_hex_up},
		{'u', print_unsigned},
		{'\0', NULL},
	};

	if (format == NULL)
		return (-1);
	i = 0;
	va_start(argument, format);
	while (format[i])
	{
		while (format[i] && format[i] != '%')
		{
			_putchar(format[i]);
			++i;
		}
		j = 0;
		if (format[i] == '%')
			i++;
		while (symbole[j].letter != '\0')
		{
			if (symbole[j].letter == format[i])
			{
				symbole[j].check(argument);
				break;
			}
			j++;
		}
		if (format[i])
			i++;
	}
	va_end(argument);
	return (i);
}

