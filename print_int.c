#include "main.h"

/**
* print_int - Function to print numbers
* @num: int to print
* @len: length of characters printed
* Return: nothing
*/

void print_int(long int num, int *len)
{
	(*len)++;
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num == 0)
	{
		_putchar('0');
		return;
	}
	if (num / 10 != 0)
	{
		print_int(num / 10, len);
	}
	_putchar('0' + num % 10);
}
