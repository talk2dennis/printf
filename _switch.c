#include "main.h"

/**
 * _switch - costum switch to hunddle the options
 *
 * @c: char
 * @args: va_list
 * @len: pointer to len of characters
 *
 *Return: nothing
 */

void _switch(char c, va_list args, int *len)
{
	char *str;

	switch (c)
	{
		case 'c':
			_putchar(va_arg(args, int));
			(*len)++;
			break;
		case 's':
			str = (va_arg(args, char *));
			if (str == NULL)
			{
				str = "(nil)";
			}
			print_str(str);
			(*len) += _strlen(str);
			break;
		case '%':
			_putchar('%');
			(*len)++;
			break;
		case 'i':
			print_int(va_arg(args, long int), len);
			break;
		case 'd':
			print_int(va_arg(args, long int), len);
			break;
		case 'b':
			printf_bin(va_arg(args, long int), len);
			break;
		  
		default:
			_putchar(va_arg(args, int));
			(*len)++;
			break;
	}
}
