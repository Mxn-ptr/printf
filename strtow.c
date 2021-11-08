#include "main.h"

/**
* strtow - Each element of this array should contain
* a single word, null-terminated
* @str: string
* Return: a pointer to an array of strings (words)
*/

char **strtow(char *str)
{
	unsigned int i, j, k;
	unsigned int word = 0;
	char **tab_word;

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] == ' ')
			word++;
	if (str == NULL || _strlen(str) == 0 || i == word)
		return (NULL);
	tab_word = (char **)malloc(sizeof(char *) * word + 1);
	if (tab_word == NULL)
		return (NULL);
	k = 0;
	i = 0;
	while (str[i] != '\0' && i < _strlen(str))
	{
		j = 0;
		while (str[i + j] && str[i + j] != ' ')
			j++;
		if (j == 0)
		{
			i++;
			continue;
		}
		tab_word[k] = (char *)malloc(sizeof(char) * j + 1);
		if (tab_word[k] == NULL)
		{
			for (j = 0; j < k; j++)
				free(tab_word[j]);
			free(tab_word);
			return (NULL);
		}
		for (j = 0; str[i + j] && str[i + j] != ' '; j++)
			tab_word[k][j] = str[i + j];
		tab_word[k][j] = '\0';
		k++;
		i += j;
	}
	tab_word[k] = NULL;
	return (tab_word);
}
