#include "main.h"

/**
* rot13 - crypt a string in rot13
* @str: string
* Return: string cypher
*/
char *rot13(char *str)
{
	int i;
	int j;
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (str[i])
	{
		j = 0;
		while (input[j] && output[j])
		{
			if (input[j] == str[i])
			{
				str[i] = output[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}

