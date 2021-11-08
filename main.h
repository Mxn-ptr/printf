#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>

/* lib function*/
int _abs(int n);
int _isalpha(int c);
int _isdigit(int c);
int _islower(int c);
int _isupper(int c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
void print_array(int *a, int n);
void print_number(int n);
int _putchar(char c);
void _puts(char *str);
char *rot13(char *str);
char *_strcat(char *dest, char *src);
char *_strchr(char *s, char c);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
char *string_toupper(char *str);
unsigned int _strlen(char *s);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
char **strtow(char *str);
void swap_int(int *a, int *b);
void binary(int nb);

/*printf func*/
void print_string(va_list s);
void print_char(va_list c);
int _printf(const char *format, ...);
void print_int(va_list s);
void print_binary(va_list b);

/**
 * struct format - struct for check the letter
 * @letter: letter to check
 * @check: function to check
 */

typedef struct format
{
	char letter;
	void (*check)(va_list arg);
} format_t;

#endif /*MAIN_H*/
