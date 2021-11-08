#include "main.h"

/**
* _strlen - determine se sizeof ol string
* @s: string
* Return: the size of str
*/

unsigned int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

