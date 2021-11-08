#include "main.h"

/**
* print_number - print number in output
*
* @n: integer
* Return: nothing
*/
void print_number(int n)
{
	unsigned int n_1;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	n_1 = n;
	if (n_1 / 10)
		print_number(n_1 / 10);
	_putchar((n_1 % 10) + '0');
}

/**
* print_number_u - print number in output
*
* @n: integer
* Return: nothing
*/
void print_number_u(unsigned int n)
{
	if (n / 10)
		print_number_u(n / 10);
	_putchar((n % 10) + '0');	
}
