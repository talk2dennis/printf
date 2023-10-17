#include "main.h"

/**
 * print_rot13 - print coding alpha + 13alpha
 *@str: the string given
 *Return: nothing
 */
void print_rot13(char *str)
{
	int pls = 0;
	int len = _strlen(str);
	int i;
	
	for (i = 0; i < len; i++)
	{
		char c = str[i];
		
		if (c >= 'a' && c <= 'z')
		{
			c = (c - 'a' + 13) % 26 + 'a';
			pls++;
		}
		else if (c >= 'A' && c <= 'Z')
		{
			c = (c - 'A' + 13) % 26 + 'A';
		}
		_putchar(c);
	}
}
