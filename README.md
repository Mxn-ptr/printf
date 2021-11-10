# Project Printf

## Context

This repository is a project during the first year of Holberton School.

It is to be done in duo and consists in recoding the famous printf function.

# _printf

## Description

The function _printf is a variadic function which prints a string according to a format to the standard output like the function printf.

## Prototype

`int _printf(const char *format, ...);`

## Conversion specifiers

| Specifiers  | Description |
| ------------- |:-------------:|
| `%c`          | Print a single character     |
| `%s`          | Print a string of characters |
| `%d`          | Print a decimal number       |
| `%i`          | Print a integer              |
| `%u`          | Print a unsigned int         |
| `%b`          | Convert a decimal number to binary and prints it|
| `%o`          | Convert a decimal number to octal and prints it |
| `%x`| Convert a decimal number to hexadecimal and prints it in lowercase|
| `%X` |Convert a decimal number to hexadecimal and prints it in uppercase|

## Compile

The commande to compile your files is :
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`

## Examples

- `_printf("%c", 't');` => prints the character 't'

- `_printf("%s", "Holberton");` => prints the string "Holberton"

- `_printf("%d", -15627382);` => prints the decimal number "-15627382"

- `_printf("%b\n", 157);` => converts the decimal number "157" in binary and prints the resultat "10011101" followed by a new line

## Credits

This project was created by Jordan Mpounza and Maxence Potier.

- Github of Jordan Mpounza : https://github.com/ozswar94

- Github of Maxence Potier : https://github.com/Mxn-ptr
