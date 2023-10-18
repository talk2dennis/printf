#include "main.h"
/**
*print_str - Function to print string of characters
* @args: va_list args
* Return: length of printed chars
*/
int print_revstr(char *str)
{
	int i = 0, len;

	if (str == NULL)
		str = "(null)";
	len = _strlen(str);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	return (len);
}
