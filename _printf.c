#include "main.h"

/**
 * _printf - my main function
 *
 * @format: the string format
 *
 * Return: lenght
 */


int _printf(const char *format, ...)
{
	va_list args;
	int len = 0, i = 0;
	char *s;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++;
			i++;
		}
		else
		{
			i++;
			switch (format[i])
			{
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
			i++;
		}
	}
	va_end(args);
	return (len);
}
