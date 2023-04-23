#include <unistd.h>
#include "main.h"

/**
 * _puts - Writes a string to stdout
 * @str: The null-terminated string to write
 *
 * Return: On success, the number of characters written. On error, -1.
 */
int _puts(char *str)
{
	int i, len = 0;

	if (str == NULL)
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (_putchar(str[i]) == -1)
			return (-1);
		len++;
	}

	return (len);
}
