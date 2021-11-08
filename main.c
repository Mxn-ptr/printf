#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int d = 56;
	int e = 1562;

_printf("Let's try to printf a simple sentence.\n");


    _printf("Character:[%c]\n", 'H');

    _printf("String:[%s]\n", "I am a string !");
    _printf("%d\n", d);
    _printf("%i\n", e);
	_printf("%b\n", 98);
    _printf("%o\n", 98);
    _printf("%X\n", 45);
    _printf("%x gygyggy %x vfv %s\n", 255, 78, "Jordan");
    _printf("%u\n",24342343);
    return (0);
}
