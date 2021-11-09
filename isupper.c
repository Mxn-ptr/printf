#include "main.h"

/**
* _isupper - check if the char is uppercase or not
*
* @c: integer
* Return: 1 if c is uppercase, 0 if is not
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
