#include "main.h"

/**
* print_int - Function to print numbers
* @num: int to print
* Return: nothing
*/
void print_int(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num / 10 != 0)
		print_int(num / 10);
	_putchar('0' + num % 10);
}
