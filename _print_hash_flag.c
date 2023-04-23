#include "main.h"

/**
* _print_hash_flag - Prints a prefix for octal, hexadecimal, and binary numbers
* @specifier: The format specifier for the number ('o' for octal, 'x' for hexadecimal, 'X' for
uppercase hexadecimal, 'b' for binary)
* Return: On success, the number of characters printed. On error, -1.
*/

int _print_hash_flag(char specifier)
{
	int num_digits = 0;

	if (specifier == 'o' || specifier == 'x' || specifier == 'X' || specifier == 'b')
	{
		_putchar('0');
		num_digits++;
		if (specifier == 'x' || specifier == 'X')
		{
			_putchar(specifier);
			num_digits++;
		}
	}
	return (num_digits);

