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

	while (format[len] != '\0')
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
					i++;
					break;
				case 's':
					print_str(va_arg(args, char *));
					len += _strlen(va_arg(args, char *));
					i++;
					break;
				case '%':
					_putchar('%');
					len++;
					i++;
					break;
				default:
					_putchar(va_arg(args, int));
					i++;
					break;
			}
		}
	}
	va_end(args);
	return (len);
}
