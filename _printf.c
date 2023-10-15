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
			_switch(s, format[i]);
			i++;
		}
	}
	va_end(args);
	return (len);
}
