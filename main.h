#ifndef MAIN_H
#define MAIN_H
#include "format.h"
#include <stdarg.h>
#include <stdlib.h>

/* lib function*/
int _printf(const char *format, ...);
int _abs(int n);
int _isalpha(int c);
int _isdigit(int c);
int _islower(int c);
int _isupper(int c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
void print_array(int *a, int n);
void print_number(int n, int *size);
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
void binary(unsigned int nb, int *size);
void octo(unsigned int nb, int *size);
void hex_up(unsigned int nb, int *size);
void hex_low(unsigned int nb, int *size);
void print_number_u(unsigned int n, unsigned int *size);
void _putstr(char *str);

#endif /*MAIN_H*/
