#include "main.h"

/**
* _isdigit - check if the char is digit or not
*
* @c: integer
* Return: 1 if c is digit, 0 if is not
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
