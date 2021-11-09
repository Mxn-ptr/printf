#include "main.h"

/**
* print_number - print number in output
*
* @n: integer
* @size: size for printf
* Return: nothing
*/
void print_number(int n, int *size)
{
	unsigned int n_1;

	if (n < 0)
	{
		n *= -1;
		*size += 1;
		_putchar('-');
	}
	n_1 = n;
	if (n_1 / 10)
	{
		print_number(n_1 / 10, size);
	}
	*size += 1;
	_putchar((n_1 % 10) + '0');
}

/**
* print_number_u - print number in output
*
* @n: integer
* @size: size for printf
* Return: nothing
*/
void print_number_u(unsigned int n, unsigned int  *size)
{
	if (n / 10)
	{
		print_number_u(n / 10, size);
	}
	*size += 1;
	_putchar((n % 10) + '0');
}
