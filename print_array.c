#include "main.h"
#include <stdio.h>

/**
* print_array - print array
* @a: int array
* @n: size of array
* Return: nothing
*/

void print_array(int *a, int n)
{
	int i;

	if (n < 0)
	{
		putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	putchar('\n');
}
