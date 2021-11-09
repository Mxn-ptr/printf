#include "main.h"

/**
* _isalpha - check if the charater is alpha
* @c: the character check
* Return: 1 if c is in alpha, 0 if c is not
*/
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

