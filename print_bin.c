#include "main.h"

/**
 * printf_bin - print binary function
 *
 *@n: the intiger number given to convert
 *
 * Return: nothing
 */
void printf_bin(int n,  int *len)
{
        char bin_str[32];
        int i;

        if (n < 0)
        {
                n = -n;

                while (n > 0)
                {
                        bin_str[i] = '0' + (n % 2);
                        n /= 2;
                        i++;
                }
                for (i = 1; i >= 0; i--)
                {
                        _putchar('-');
                        _putchar(bin_str[i]);
                        (*len)++;
                }
        }

	else if (n > 0)
	{
	while (n > 0)
	{
                        bin_str[i] = '0' + (n % 2);
                        n /= 2;
                        i++;
                }
                for (i = i - 1; i >= 0; i--)
                {
                        _putchar(bin_str[i]);
                        (*len)++;
                }
        }
		else
        {
                _putchar('0');
                (*len)++;;
        }
}
