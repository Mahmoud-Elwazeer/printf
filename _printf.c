#include "main.h"
#include <stdarg.h>

/**
 * _printf - write output to stdout, the standard output stream
 * @format - pointer to all string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int size = 0, i;
	char ch;
	va_list args;

	va_start(args, format);
	size = _strlen((char *)format);

	for (i = 0; *(format + i) != '\0'; i++)
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
						size++;
						_putchar(va_arg(args, int));
						break;
					case 's':
						size += _puts(va_arg(args, char *));
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
				size++;
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
				size++;
				_putchar(ch);
				break;
		}
	}
	_putchar('\n');
	va_end(args);

	return (size);
}
