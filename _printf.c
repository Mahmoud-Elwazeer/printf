#include "main.h"
#include <stdarg.h>

/**
 * _printf - write output to stdout, the standard output stream
 * @format - pointer to all string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int size, i;
	char ch;
	va_list args;

	va_start(args, format);
	size = _strlen((char *)format);

	for (i = 0; i < size; i++)
	{
		ch = *(format + i);
		switch (ch)
		{
			case '%':
				i++;
				ch = *(format + i);
				switch (ch)
				{
					case 'c':
						_putchar(va_arg(args, int));
						break;
					case 's':
						_puts(va_arg(args, char *));
						break;
					case 'd':
					case 'i':
						print_int(va_arg(args, int));
						break;
					default:
						break;
				}
				break;
			case '\\':
				i++;
				ch = *(format + i);
				switch (ch)
				{
					case 'n':
						_putchar('\n');
						break;
					default:
						break;
				}
				break;
			default:
				_putchar(ch);
				break;
		}
	}

	va_end(args);

	return (size);
}
