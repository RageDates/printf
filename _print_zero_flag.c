#include "main.h"

/**
* _print_zero_flag - Prints leading zeros for numeric values
* @width: The width specifier for the number
* @precision: The precision specifier for the number
* @num_digits: The number of digits in the printed number
* Return: On success, the number of characters printed. On error, -1.
*/

int _print_zero_flag(int width, int precision, int num_digits)
{
	int num_zeros = 0;

	if (precision >= 0)
		num_zeros = precision - num_digits;
	else if (width > 0)
		num_zeros = width - num_digits;
	while (num_zeros > 0)
	{
		_putchar('0');
		num_zeros--;
	}
	return (num_zeros);
}
