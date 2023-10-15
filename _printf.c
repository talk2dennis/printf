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
					i++;
					len++;
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
					len++;
					break;
			}
		}
	}
	va_end(args);
	return (len);
}
