#include "main.h"

/**
* print_int - Function to print numbers
* @num: int to print
* @len: length of characters printed
* Return: nothing
*/
void print_int(int num, int *len)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
		(*len)++;
	}
	if (num == 0)
	{
		_putchar('0');
		(*len)++;
	}
	if (num / 10 != 0)
	{
		print_int(num / 10, len);
		(*len)++;
	}
	_putchar('0' + num % 10);
}
