#include "main.h"

/**
* print_int - Function to print numbers
* @num: int to print
* Return: legth of printed chars
*/

int print_int(int num)
{
	int len = 0;

	if (num < 0)
	{
		putchar('-');
		num = -num;
		len++;
	}
	if (num == 0)
	{
		putchar('0');
		return (1);
	}
	if (num / 10 != 0)
	{
		len += print_int(num / 10);
	}
	putchar('0' + (num % 10));
	len++;
	return (len);
}

