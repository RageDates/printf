#include <unistd.h>
#include "main.h"

/**
 * _print_pointer - Prints a pointer address in hexadecimal format to stdout
 * @p: The pointer to print
 *
 * Return: On success, the number of characters printed. On error, -1.
 */
int _print_pointer(void *p)
{
	unsigned long int addr = (unsigned long int)p;
	int num_digits = 0;

	_putchar('0');
	_putchar('x');
	num_digits += 2;

	if (addr == 0)
	{
		_putchar('0');
		num_digits++;
	}

	while (addr != 0)
	{
		int digit = addr & 15;
		_putchar((digit < 10) ? ('0' + digit) : ('a' + digit - 10));
		addr >>= 4;
		num_digits++;
	}

	return (num_digits);
}
