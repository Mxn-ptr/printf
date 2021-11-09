#include "main.h"

/**
* _strpbrk - search a string for any of a set of bytes
* @s: string
* @accept: char allow
* Return: adress of the first occurence
*/
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j] != s[i] && accept[j])
			j++;
		if (accept[j] == s[i])
			return (&s[i]);
		i++;
	}
	return (NULL);
}
