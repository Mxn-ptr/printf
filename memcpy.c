#include "main.h"

/**
* _memcpy - set byte on array
* @dest: string destination
* @src: string sources
* @n: bytes copy
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	n--;
	for (; n > 0; n--)
		*(dest + n) = *(src + n);
	*(dest + n) = *(src + n);
	return (dest);
}

