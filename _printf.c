#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int len = 0;
	va_list args;
	char buffer[1024];
	char *str;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					len += _putchar(va_arg(args, int));
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(null)";
					len += _puts(str);
					break;
				case '%':
					len += _putchar('%');
					break;
				case 'd':
				case 'i':
					len += _print_int(va_arg(args, int));
					break;
				case 'b':
					len += _print_binary(va_arg(args, unsigned int));
					break;
				case 'u':
					len += _print_unsigned(va_arg(args, unsigned int));
					break;
				case 'o':
					len += _print_octal(va_arg(args, unsigned int));
					break;
				case 'x':
					len += _print_hex(va_arg(args, unsigned int), 0);
					break;
				case 'X':
					len += _print_hex(va_arg(args, unsigned int), 1);
					break;
				case 'p':
					len += _print_pointer(va_arg(args, void *));
					break;
					/**
				case '+':
					_print_plus_flag();
					break;
				case ' ':
					_print_space_flag();
					break;
				case '#':
					_print_hash_flag();
					break;
				case 'l':
					_print_long_flag();
					break;
				case 'h':
					_print_short_flag();
					break;
				case '0':
					_print_zero_flag();
					break;
				case '-':
					_print_minus_flag();
					break;
					*/
				case 'r':
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(null)";
					len += _print_reversed(str);
					break;
				case 'R':
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(null)";
					len += _print_rot13(str);
					break;
				case 'S':
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(null)";
					len += _print_non_printable(str);
					break;
				default:
					len += _putchar('%');
					len += _putchar(*format);
					break;
			}
		}
		else
		{
			len += _putchar(*format);
		}
		format++;
	}

	va_end(args);
	return (len);
}
