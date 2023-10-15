#include "main.h"

/**
 *_switch - costum switch to hunddle the options 
 *
 *@c: char
 *
 *Return: nothing
 */

void _switch(char *s, char c)
{
  switch (c)
  
	case 'c':
		_putchar(va_arg(args, int));
		len++;
		break;
	case 's':
		s = (va_arg(args, char *));
		print_str(s);
		len += _strlen(s);
		break;
	case '%':
		_putchar('%');
		len++;
		break;
	default:
		_putchar(va_arg(args, int));
		len++;
		break;
}
}
