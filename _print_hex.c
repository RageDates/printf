#include <unistd.h>
#include "main.h"

/**
 * _print_hex - Prints an unsigned integer in hexadecimal format to stdout
 * @n: The unsigned integer to print in hexadecimal format
 * @uppercase: A flag indicating whether to use uppercase letters (1) or lowercase letters (0)
 *
 * Return: On success, the number of characters printed. On error, -1.
 */
int _print_hex(unsigned int n, int uppercase)
{
	int num_digits = 0;
	char hex_digits_uppercase[] = "0123456789ABCDEF";
	char hex_digits_lowercase[] = "0123456789abcdef";
	char *hex_digits = uppercase ? hex_digits_uppercase : hex_digits_lowercase;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n != 0)
	{
		int digit = n & 15;
		_putchar(hex_digits[digit]);
		n >>= 4;
		num_digits++;
	}

	return (num_digits);
}
