#include "main.h"

/**
* _print_long_flag - Prints a 'l' or 'll' modifier for long and long long integers
* @length_modifier: The length modifier for the number ('l' for long, 'll' for long long)
* Return: On success, the number of characters printed. On error, -1.
*/

int _print_long_flag(char *length_modifier)
{
	int num_digits = 0;

	if (length_modifier != NULL)
	{
		if (length_modifier[0] == 'l')
		{
			_putchar('l');
			num_digits++;
			if (length_modifier[1] == 'l')
			{
				_putchar('l');
				num_digits++;
			}
		}
	}
	return (num_digits);
}
