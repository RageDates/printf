#include "main.h"

/**
* _print_minus_flag - Prints left-justified output for numeric values
* @width: The width specifier for the number
* @num_digits: The number of digits in the printed number
* Return: On success, the number of characters printed. On error, -1.
*/

int _print_minus_flag(int width, int num_digits)
{
	int num_spaces = width - num_digits;

	while (num_spaces > 0)
	{
		_putchar(' ');
		num_spaces--;
	}
	return (num_spaces);
}
