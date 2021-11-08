#include "main.h"

/**
* binary - convert binary int
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
