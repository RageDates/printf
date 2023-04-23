#include <unistd.h>
#include "main.h"

/**
 * _print_int - Prints an integer to stdout
 * @n: The integer to print
 *
 * Return: On success, the number of characters printed. On error, -1.
 */
int _print_int(int n)
{
	int num_digits = 0;
	int is_negative = 0;
	unsigned int num;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		is_negative = 1;
		num = -n;
	}
	else
	{
		num = n;
	}

	while (num != 0)
	{
		int digit = num % 10;
		_putchar('0' + digit);
		num /= 10;
		num_digits++;
	}

	if (is_negative)
	{
		_putchar('-');
		num_digits++;
	}

	return (num_digits);
}
