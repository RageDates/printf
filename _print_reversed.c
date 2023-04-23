#include "main.h"

/**
* _print_reversed - Prints a reversed string to stdout
* @str: The string to print
* Return: On success, the number of characters printed. On error, -1.
*/

int _print_reversed(char *str)
{
	int num_chars = 0;
	int len = 0;

	if (str != NULL)
	{
		while (str[len])
			len++;
		while (len > 0)
		{
			len--;
			_putchar(str[len]);
			num_chars++;
		}
	}
	return (num_chars);
}
