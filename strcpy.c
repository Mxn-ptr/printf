#include "main.h"
#include <stdio.h>

/**
* _strcpy - copy string
* @dest: string destination
* @src: string source
* Return: value of dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
