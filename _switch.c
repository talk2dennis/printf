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
				str = "(null)";
			}
			print_str(str);
			(*len) += _strlen(str);
			break;
		case '%':
			_putchar('%');
			(*len)++;
			break;
		case 'i':
			print_int(va_arg(args, int), len);
			break;
		case 'd':
			print_int(va_arg(args, int), len);
			break;
		default:
			_putchar(va_arg(args, int));
			(*len)++;
			break;
	}
}
