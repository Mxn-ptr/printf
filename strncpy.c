#include "main.h"
#include <stdio.h>

/**
* _strncpy - copy string until n char
* @dest: string destination
* @src: string source
* @n: integer (limit)
* Return: value of dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
