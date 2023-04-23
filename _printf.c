#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - prints anything
 * @format: list of parameters
 *
 *Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
    char c;
    char *str;
    int i;
    int num;

	va_list args;

	va_start(args, format);

	int count = 0, index = 0;
    if (format == NULL)
        return (0);
	while (format[index] != '\0')
	{
	    if (format[index] == '%')
        {
            index++;
            switch(format[index])
            {
            case 'c':
                c = va_arg(args, int);
                putchar(c);
                count++;
                break;
            case 's':
                str = va_arg(args, char *);
                for (i = 0; str[i] != '\0'; i++)
                {
                    putchar(str[i]);
                    count++;
                }
                break;
            case '%':
                putchar('%');
                count++;
                break;
            case 'd':
                num = va_arg(args, int);
                printf("%d", num);
                count++;
                break;
            case 'i':
                num = va_arg(args, int);
                printf("%i", num);
                count++;
                break;
            case 'u':
                num = va_arg(args, int);
                printf("%u", num);
                count++;
                break;
            default:
                putchar(format[index
