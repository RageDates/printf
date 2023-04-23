#include <unistd.h>
#include "main.h"

/**
 * _print_binary - Prints an unsigned integer in binary format to stdout
 * @n: The unsigned integer to print in binary format
 *
 * Return: On success, the number of characters printed. On error, -1.
 */
int _print_binary(unsigned int n)
{
	int num_digits = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n != 0)
	{
		int bit = n & 1;
		_putchar('0' + bit);
		n >>= 1;
		num_digits++;
	}

	return (num_digits);
}
