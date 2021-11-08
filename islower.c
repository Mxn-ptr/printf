#include "main.h"

/**
* _islower - check if the charater is int lowercase
* @c: the character check
* Return: 1 if c is in lowercase, 0 if c is not
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

