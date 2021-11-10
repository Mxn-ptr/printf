#include "main.h"
#include <stdio.h>
/**
* binary - convert decimal to binary
* @nb: number
* @size: size for printf
*/

void binary(unsigned int nb, int *size)
{
	if (nb / 2)
	{
		binary(nb / 2, size);
	}
	*size += 1;
	_putchar('0' + nb % 2);
}

/**
* octo - convert decimal to octal
* @nb: number
* @size: size for printf
*/

void octo(unsigned int nb, int *size)
{
	if (nb / 8)
	{
		octo(nb / 8, size);
	}
	*size += 1;
	_putchar('0' + nb % 8);
}


/**
* hex_up - convert decimal to hexadecimal uppercase
* @nb: number
* @size: size for printf
*/

void hex_up(unsigned int nb, int *size)
{

	if (nb / 16)
	{
		hex_up(nb / 16, size);
	}
	*size += 1;
	if (nb % 16 < 10)
		_putchar('0' + nb % 16);
	else
		_putchar('A' + ((nb % 16) - 10));
}

/**
* hex_low - convert decimal to hexadecimal lowercase
* @nb: number
* @size: size for printf
*/

void hex_low(unsigned int nb, int *size)
{
	if (nb / 16)
	{
		hex_low(nb / 16, size);
	}
	*size += 1;
	if (nb % 16 < 10)
		_putchar('0' + nb % 16);
	else
		_putchar('a' + ((nb % 16) - 10));
}

/**
* hex_S - convert decimal to hexadecimal Uppercase
* @nb: number
* @size: size for printf
*/
void hex_S(unsigned int nb, int *size)
{
	int check = 1;

	if (nb / 16)
	{
		hex_up(nb / 16, size);
	}
	if (check == 1)
	{
		_putchar('0');
		*size += 1;
	}
	*size += 1;
	if (nb % 16 < 10)
		_putchar('0' + nb % 16);
	else
		_putchar('A' + ((nb % 16) - 10));
	check = 0;
}
