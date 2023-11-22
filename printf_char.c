#include "main.h"

/**
 * printf_char - Prints char.
 * @alx: The argument.
 *
 * Return: 1.
 */
int printf_char(va_list alx)
{
	char my_char;

	my_char = va_arg(alx, int);
	_putchar(my_char);
	return (1);
}
