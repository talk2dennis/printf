#include "main.h"

/**
 * printf_bin - print binary function
 *
 * @n: the intiger number given to convert
 * @len: the length of characters printed
 *
 * Return: nothing
 */
void printf_bin(int n, int *len)
{
	char bin_str[32];
	int i = 0;
	
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	
	do
	{
		bin_str[i++] = '0' + (n % 2);
		n /= 2;
	} while (n > 0);
	
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(bin_str[i]);
		(*len)++;
	}
}
