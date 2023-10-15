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
	char *s;

	switch (c)
	{
		case 'c':
			_putchar(va_arg(args, int));
			(*len)++;
			break;
		case 's':
			s = (va_arg(args, char *));
			if (s == NULL || s[0] == '\0')
				break;
			print_str(s);
			(*len) += _strlen(s);
			break;
		case '%':
			_putchar('%');
			(*len)++;
			break;
		case 'i':
			print_int(va_arg(args, int));
			(*len)++;
			break;
		case 'd':
			print_int(va_arg(args, int));
			(*len)++;
			break;	
		default:
			_putchar(va_arg(args, int));
			(*len)++;
			break;
	}
}
