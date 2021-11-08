#ifndef MAIN_H
#define MAIN_H

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
char *_strcpy(char *dest, char *src)
char *string_toupper(char *str);
int _strlen(char *s);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
char **strtow(char *str);
void swap_int(int *a, int *b);

#endif /*MAIN_H*/
