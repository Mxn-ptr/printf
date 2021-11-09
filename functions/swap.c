#include "main.h"

/**
* swap_int - swap value with 2 variable
* @a: integer pointer
* @b: integer pointer
* Return: nothing
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

