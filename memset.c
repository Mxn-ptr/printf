#include "main.h"

/**
* _memset - set byte on array
* @s: string
* @b: bytes
* @n: n bytes
* Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	n--;
	for (; n  > 0; n--)
		*(s + n) = b;
	*(s + n) = b;
	return (s);
}

