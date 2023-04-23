#include "main.h"

/**
* _print_non_printable - Prints non-printable characters as ASCII codes
* @str: The string to print
* Return: On success, the number of characters printed. On error, -1.
*/

int _print_non_printable(char *str)
{
	int num_chars = 0;

	if (str != NULL)
	{
		while (*str)
		{
			if (*str < 32 || *str > 126)
			{
				_putchar('\\');
				_putchar('x');
				_putchar('0' + (*str / 16));
				_putchar('0' + (*str % 16));
				num_chars += 4;
			}
			else
			{
				_putchar(*str);
				num_chars++;
			}
			str++;
		}
	}
	return (num_chars);
}
