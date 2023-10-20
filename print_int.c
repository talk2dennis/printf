#include "main.h"

/**
* print_int - Function to print numbers
* @num: int to print
* @len: lenght
* Return: nothing
*/
void print_int(int num, int *len)
{
	if (num == INT_MIN)
	{
		_putchar('-');
		 _putchar('2');
		 num = 147483648;
		(*len) += 2;
	}
	else if (num < 0)
	{
		_putchar('-');
		num = -num;
		(*len)++;
	}
	if (num == 0)
	{
		_putchar('0');
		(*len)++;
		return;
	}
	if (num / 10 != 0)
	{
		print_int(num / 10, len);
	}
	_putchar('0' + num % 10);
	(*len)++;
}
