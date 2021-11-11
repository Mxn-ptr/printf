#include "main.h"

/**
 * check_formatage - check to found the argument
 * @c: char check
 * Return: size
 */

static int check_formatage(char c)
{
	if (c == '%')
	{
		_putchar('%');
		return (1);
	}
	return (0);
}

/**
 * check_arg - check to found the argument
 * @arg: va_list
 * @format : format
 * @symbole : symbole
 * Return: size
 */

static int check_arg(va_list arg, char *format, format_t *symbole)
{
	int i = 0, j = 0, size = 0;

	while (format[i])
	{
		while (format[i] && format[i] != '%')
		{
			_putchar(format[i]);
			++i;
			size++;
		}
		j = 0;
		if (format[i] == '%')
		{
			i++;
			size += check_formatage(format[i]);
			if (format[i] == '\0')
				return (-1);
		}
		while (symbole[j].letter != '\0')
		{
			if (symbole[j].letter == format[i])
			{
				size += symbole[j].check(arg);
				break;
			}
			j++;
		}
		if (format[i])
		{
			if (symbole[j].letter == '\0' && format[i] != '%')
			{
				_putchar('%');
				_putchar(format[i]);
				size += 2;
			}
			i++;
		}
	}
	return (size);
}

/**
* _printf - print in stdout a format string
* @format: string with format
* Return: size of characters
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
		{'r', print_rev},
		{'R', print_rot13},
		{'S', print_String},
		{'p', print_addr},
		{'\0', NULL},
	};

	if (format == NULL)
		return (-1);

	va_start(argument, format);
	bytes = check_arg(argument, (char *)format, symbole);
	va_end(argument);
	return (bytes);
}


