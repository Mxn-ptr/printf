#include "main.h"

/**
* _strspn - get length of a prefix substring
* @s: string
* @accept: char allow
* Return: size of spn
*/
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int len_prefix;

	i = 0;
	len_prefix = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j] != s[i] && accept[j] != '\0')
			j++;
		if (accept[j] == s[i])
			len_prefix++;
		else
			return (len_prefix);
		i++;
	}
	return (len_prefix);
}
