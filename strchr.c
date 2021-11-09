#include "main.h"

/**
* _strchr - search a char in string
* @s: string
* @c: char search
* Return: at c in string or null
*/
char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}

