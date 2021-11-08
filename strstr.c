#include "main.h"

/**
* _strlen - determine se sizeof ol string
* @s: string
* Return: the size of str
*/

int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
* _strstr - search a string for any of a set of bytes
* @haystack: string
* @needle: search string
* Return: adress of the first occurence
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	unsigned int j;
	unsigned int len_needle = _strlen(needle);

	i = 0;
	while (haystack[i])
	{
		j = 0;
		while ((needle[j] == haystack[i + j]) && (needle[j] && haystack[i + j]))
			j++;
		if (len_needle == j)
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}
