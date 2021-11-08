#include "main.h"

/**
* _strncat - concataine 2 strings until n char
* @dest: string
* @src: string
* @n: int
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i))
		i++;
	while (*(src + j) && j < n)
		*(dest + i++) = *(src + j++);
	*(dest + i) = '\0';
	return (dest);
}

