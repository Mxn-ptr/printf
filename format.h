#ifndef FORMAT_H
#define FORMAT_H
#include <stdarg.h>

/**
 * struct format - struct for check the letter
 * @letter: letter to check
 * @check: function to check
 */

typedef struct format
{
	char letter;
	int (*check)(va_list arg);
} format_t;

/*printf func*/
int print_string(va_list s);
int print_char(va_list c);
int print_int(va_list s);
int print_binary(va_list b);
int print_octo(va_list b);
int print_hex_up(va_list b);
int print_hex_low(va_list b);
int print_unsigned(va_list u);
int print_rev(va_list strings);
int print_rot13(va_list s);
int print_String(va_list s);
int print_addr(va_list ptr);

#endif /*FORMAT_H*/
