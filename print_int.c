#include "main.h"

/**
* print_int - Function to print numbers
* @num: int to print
* Return: nothing
*/

int print_int(int n)
{
	int printed_chars = 0, last_num, last_digit = n % 10, digit, exponent = 1;

	n = n / 10;
	last_num = n;

	if (last_digit < 0)
	{
		_putchar('-');
		last_num = -last_num;
		n = -n;
		last_digit = -last_digit;
		printed_chars++;
	}
	if (last_num > 0)
	{
		while (last_num / 10 != 0)
		{
			exponent = exponent * 10;
			last_num /= 10;
		}
		last_num = n;
		while (exponent > 0)
		{
			digit = last_num / exponent;
			_putchar(digit + '0');
			last_num = last_num - (digit * exponent);
			exponent /= 10;
			printed_chars++;
		}
	}
	_putchar(last_digit + '0');

	return (printed_chars);
}

