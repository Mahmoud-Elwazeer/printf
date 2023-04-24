#include "main.h"

/**
 * _printf - write output to stdout, the standard output stream
 * @format: pointer to all string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int size = 0, i;
	char ch;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);

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
						_putchar((char)((va_arg(args, int))));
						break;
					case 's':
						size += _puts(va_arg(args, char *));
						break;
					case '%':
						size++;
						_putchar('%');
						break;
					case 'd':
					case 'i':
					case 'u':
						size += print_int(va_arg(args, int));
						break;
					case 'b':
						size += binary(va_arg(args, unsigned int));
						break;
					case 'r':
						size++;
						_putchar('r');
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
					case 't':
						_putchar('\t');
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
	va_end(args);

	return (size);
}
