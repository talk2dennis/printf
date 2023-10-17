#include "main.h"
#include <stdlib.h>

/**
 * print_hexa - change the decimal to hexadecimal
 *@n:the number in decimal
 *Return: returng the lenght of the string desimal pranted
 */

int print_hexa(int n)
{
	char *hexa_chars = malloc(sizeof(char) * 16);
	int len = 0;
	unsigned int num = n;
	int i;

	while (num != 0)
	{
		unsigned int temp = num % 16;

		hexa_chars[len] = hexa_chars[temp];
		len++;
		num /= 16;
	}

	for (i = len - 1; i >= 0; i--)
		_putchar(hexa_chars[i]);

	free(hexa_chars);
	return (len);
}
