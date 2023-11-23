#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};


int _printf(const char *format, ...);
int handle_printf(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);
int printf_char(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int printf_string(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int printf_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int printf_int(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int printf_binary(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int printf_unsigned(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int printf_octal(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int printf_hexadecimal(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int printf_hexa_upper(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int printf_hexa(va_list types, char map_to[],
		char buffer[], int flags, char flag_ch, int width, int precision, int size);
int printf_non_printable(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int printf_pointer(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int printf_reverse(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int printf_rot13string(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int printf_37(void);
int _putchar(char c);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);

#endif

