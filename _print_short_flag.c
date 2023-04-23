#include "main.h"

/**
* _print_short_flag - Prints a 'h' or 'hh' modifier for short and char
* @length_modifier: The length modifier for the number ('h' for short, 'hh' for char)
* Return: On success, the number of characters printed. On error, -1.
*/

int _print_short_flag(char *length_modifier)
{
	int num_digits = 0;

	if (length_modifier != NULL)
	{
		if (length_modifier[0] == 'h')
		{
			_putchar('h');
			num_digits++;
			if (length_modifier[1] == 'h')
			{
				_putchar('h');
				num_digits++;
			}
		}
	}
	return (num_digits);
}
