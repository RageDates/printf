#include "main.h"

/**
* _print_rot13 - Prints a ROT13-encoded string to stdout
* @str: The string to print
* Return: On success, the number of characters printed. On error, -1.
*/

int _print_rot13(char *str)
{
	int num_chars = 0;
	char *rot13 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *replacement = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (str != NULL)
	{
		while (*str)
		{
			char c = *str;
			int i;

			for (i = 0; rot13[i]; i++)
			{
				if (c == rot13[i])
				{
					_putchar(replacement[i]);
					num_chars++;
					break;
				}
			}
			if (!rot13[i])
			{
				_putchar(c);
				num_chars++;
			}
			str++;
		}
	}
	return (num_chars);
}
