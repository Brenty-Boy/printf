#include "main.h"

/**
* printf_hex - Function that prints an unsigned int in hexadecimal.
* @n: Unsigned to be printed.
* @c: Case of printing (0 = lower, 1 = upper).
* Descriptions: Prints unsigned in hexadecimal with _putchar.
* Return: Size of the output.
*/
int printf_hex(unsigned int n, unsigned int c)
{
	unsigned int len, powten, j, digit, num;
	int count = 0;
	char diff;

	if (n != 0)
	{
		num = n;
		len = 0;
		if (c)
			diff = 'A' - ':';
		else
			diff = 'a' - ':';
		while (num != 0)
		{
			num /= 16;
			len++;
		}
		powten = 1;
		for (j = 1; j <= len - 1; j++)
			powten *= 16;
		for (j = 1; j <= len; j++)
		{
			digit = n / powten;
			if (digit < 10)
				_putchar(digit + '0');
			else
				_putchar(digit + '0' + diff);
			count++;
			n -= digit * powten;
			powten /= 16;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
/**
* printf_x - Takes an unsigned int and prints it in lowercase hex.
* @x: Unsigned int to print.
* Descriptions: Prints in lowercase hex with _putchar.
* Return: Size of the output.
*/
int printf_x(va_list x)
{
	return (print_hex(va_arg(x, unsigned int), 0));
}
/**
* printf_X - Takes an unsigned int and prints it in uppercase hex.
* @X: Unsigned int to print.
* Descriptions: Prints in uppercase hex with _putchar.
* Return: Size of the output.
*/
int printf_X(va_list X)
{
	return (print_hex(va_arg(X, unsigned int), 1));
}
