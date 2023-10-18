#include "main.h"
/**
*print_revstr - Function to print string of characters
* @str: sting to rev
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
