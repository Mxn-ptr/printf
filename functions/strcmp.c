#include "main.h"
#include <stdio.h>

/**
* _strcmp - compare 2 string
* @s1: string destination
* @s2: string source
* Return: integer
*/

int _strcmp(char *s1, char *s2)
{
	int i;
	int size_s1;
	int size_s2;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	for (size_s1 = 0; s1[size_s1]; size_s1++)
	;
	for (size_s2 = 0; s1[size_s2]; size_s2++)
	;
	if (size_s1 > size_s2)
		return (s1[size_s1] - s2[i]);
	if (size_s1 < size_s2)
		return (s1[i] - s2[size_s2]);
	return (0);
}
