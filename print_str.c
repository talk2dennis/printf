#include "main.h"
/**
*print_str - Function to print string of characters
* @str: strings to print
* Return: length of printed chars
*/
int print_str(va_list args)
{
	char *str;
	int i = 0;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
