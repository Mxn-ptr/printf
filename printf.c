#include "main.h"

static int check_arg(va_list arg, char *format, format_t *symbole);
/**
* printf - print in stdout a format string
* @format: string with format
*
*/
int _printf(const char *format, ...)
{
	int bytes;
	va_list argument;
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

	va_start(argument, format);
	bytes = check_arg(argument, (char *)format, symbole);
	va_end(argument);
	return (bytes);
}

static int check_arg(va_list arg, char *format, format_t *symbole)
{
	int i, j;

	i = 0;
	while (format[i])
	{
		while (format[i] && format[i] != '%')
		{
			_putchar(format[i]);
			++i;
		}
		
		j = 0;
		while (symbole[j].letter != '\0')
		{
			if (symbole[j].letter == format[i + 1])
			{
				symbole[j].check(arg);
				break;
			}
			j++;
		}
		if (format[i])
			i += 2;
	}
	return (i);
}
