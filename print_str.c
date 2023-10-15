#include "main.h"
/**
*print_str - Function to print string of characters
* @str: strings to print
* Return: nothing
*/
void print_str(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
