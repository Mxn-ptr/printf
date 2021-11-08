#include "main.h"

/**
* binary - convert decimal to binary
* @nb: number
*
*/

void binary(int nb)
{
	if (nb / 2)
	{
		binary(nb / 2);
	}
	_putchar('0' + nb % 2);
}

void octo(int nb)
{
	if (nb / 8)
	{
		octo(nb / 8);
	}
	_putchar('0' + nb % 8);
}

void hex_up(int nb)
{

	if (nb / 16)
	{
		hex_up(nb / 16);
	}
	if (nb % 16 < 10)
		_putchar('0' + nb % 16);
	else
		_putchar('A' + ((nb % 16) - 10));
}

void hex_low(int nb)
{
	if (nb / 16)
	{
		hex_low(nb / 16);
	}
	if (nb % 16 < 10)
		_putchar('0' + nb % 16);
	else
		_putchar('a' + ((nb % 16) - 10));
}
