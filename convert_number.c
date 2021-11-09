#include "main.h"

/**
* binary - convert decimal to binary
* @nb: number
*
*/

int binary(unsigned nb, int size)
{
	if (nb / 2)
	{
		binary(nb / 2, size + 1);
	}
	_putchar('0' + nb % 2);
	return (size);
}

/**
* octo - convert decimal to octal
* @nb: number
*
*/

int octo(unsigned int nb, int size)
{
	if (nb / 8)
	{
		octo(nb / 8, size + 1);
	}
	_putchar('0' + nb % 8);
	return (size);
}


/**
* hex_up - convert decimal to hexadecimal uppercase
* @nb: number
*
*/

int hex_up(unsigned int nb, int size)
{

	if (nb / 16)
	{
		hex_up(nb / 16, size + 1);
	}
	if (nb % 16 < 10)
		_putchar('0' + nb % 16);
	else
		_putchar('A' + ((nb % 16) - 10));
	return (size);
}

/**
* hex_low - convert decimal to hexadecimal lowercase
* @nb: number
*
*/

int hex_low(unsigned int nb, int size)
{
	if (nb / 16)
	{
		hex_low(nb / 16, size + 1);
	}
	if (nb % 16 < 10)
		_putchar('0' + nb % 16);
	else
		_putchar('a' + ((nb % 16) - 10));
	return (size);
}
