#include <unistd.h>
#include "main.h"

/**
 * _print_octal - Prints an unsigned integer in octal format to stdout
 * @n: The unsigned integer to print in octal format
 *
 * Return: On success, the number of characters printed. On error, -1.
 */
int _print_octal(unsigned int n)
{
	int num_digits = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n != 0)
	{
		int digit = n & 7;
		_putchar('0' + digit);
		n >>= 3;
		num_digits++;
	}

	return (num_digits);
}
