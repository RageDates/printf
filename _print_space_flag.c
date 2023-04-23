#include "main.h"

/**
* _print_space_flag - Prints a space before a signed number if positive
* @n: The signed number to print
* @is_negative: A flag indicating whether the number is negative (1) or not (0)
* Return: On success, the number of characters printed. On error, -1.
*/

int _print_space_flag(int n, int is_negative)
{
	if (n >= 0 && !is_negative)
	{
		_putchar(' ');
		return (1);
	}
	return (0);
}
