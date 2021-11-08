
/* FONCTION POUR PRINT UN CHAR */
/**
 * print_char - print a char
 * @c: char to print
 */

void print_char(char *c)
{
	_putchar(c);
}

/* FONCTION POUR PRINT UN STRING */
/**
 * print_string - print a string
 * @str: string to print
 */

void print_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}
