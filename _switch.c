#include "main.h"

/**
 * _switch - costum switch to hunddle the options
 * @c: char
 * @args: va_list
 * @len: pointer to len of characters
 *Return: nothing
 */

void _switch(char c, va_list args, int *len)
{
	switch (c)
	{
		case 'c':
			_putchar(va_arg(args, int));
			(*len)++;
			break;
		case 's':
			(*len) += print_str(args);
			break;
		case '%':
			_putchar('%');
			(*len)++;
			break;
		case 'i':
			(*len) += print_int(va_arg(args, int));
			break;
		case 'd':
			(*len) += print_int(va_arg(args, int));
			break;
		case 'b':
			printf_bin(va_arg(args, int), len);
			break;
		case 'x':
			print_hexa(va_arg(args, long int));
			break;
		case 'R':
			(*len) += print_rot13(va_arg(args, char *));
			break;
		default:
			_putchar(va_arg(args, int));
			(*len)++;
			break;
	}
}
