#include <unistd.h>
#include "main.h"

/**
 * _print_unsigned - Prints an unsigned integer to stdout
 * @n: The unsigned integer to print
 *
 * Return: On success, the number of characters printed. On error, -1.
 */
int _print_unsigned(unsigned int n)
{
	int num_digits = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n != 0)
	{
		int digit = n % 10;
		_putchar('0' + digit);
		n /= 10;
		num_digits++;
	}

	return (num_digits);
}
