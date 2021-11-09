/**
 * print_binary - prints the number in binary
 * @b: va_list
 * Return: the number
 */

int print_binary(va_list b)
{
	int n = 0;

	binary(va_arg(b, int), &n);
	return (n);
}

/**
 * print_octo - prints the number in octal
 * @o: va_list
 * Return: the number
 */

int print_octo(va_list o)
{
	int n = 0;

	octo(va_arg(o, unsigned int), &n);
	return (n);
}

/**
 * print_hex_up - prints the number in hexadecimal uppercase
 * @X: va_list
 * Return: the number
 */

int print_hex_up(va_list X)
{
	int n = 0;

	hex_up(va_arg(X, unsigned int), &n);
	return (n);
}

/**
 * print_hex_low - prints the number in hexadecimal lowerecase
 * @x: va_list
 * Return: the number
 */

int print_hex_low(va_list x)
{
	int n = 0;

	hex_low(va_arg(x, unsigned int), &n);
	return (n);
}

/**
 * print_unsigned - prints unsigned
 * @u: va_list
 * Return: the number
 */

int print_unsigned(va_list u)
{
	unsigned int n = 0;

	print_number_u(va_arg(u, unsigned int), &n);
	return (n);
}
