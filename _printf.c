#include "main.h"

int _printf(const char *format, ...)
{
	int chara_print = 0;
	va_list list_of_args;
	
	if (format == NULL)
		return (-1);
	
	va_start(list_of_args, format);
	
	while (*format) // A loop that iterates through the characters of the format
	{
		if (*format != '%') // If format is not the % sign
		{
			write(1, format, 1); // Write the char to the standard output
			chara_print++;
		}
		else // If format is the % sign
		{
			format++; // Skip '%' - Check the next character
			if (*format == '\0')
				break;

			if (*format == '%') // This solves %%
			{
				// Handle '%%' (double '%')
				write(1, format, 1);
				chara_print++;
			}
			else if (*format == 'c')
			{
				// Handle '%c' (character)
				char c = va_arg(list_of_args, int); // Use va_arg(list, char) for char
				write(1, &c, 1);
				chara_print++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(list_of_args, char*);
				int str_len = 0;

				// Calculate the length of the string
				while (str[str_len] != '\0')
					str_len++;

				// Write the string to the standard output
				write(1, str, str_len);
				chara_print += str_len;
			}
		}
		
		format++;
	}
	
	va_end(list_of_args);

	return chara_print;
}


int main(){
	_printf("%c\n", 'v');
	_printf("%s\n", "String");
	_printf("%%\n");
	return 0;
}
