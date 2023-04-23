#include "main.h"

/**
  * _printf - printf function
  * @format: format of printf function
  * Return: number of argument in format
  */

int _printf(const char *format, ...)
{
	va_list pa;
	int i = 0, arg_num = 0;
	int (*fun_ptr)(va_list) = NULL;

	va_start(pa, format);
	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
		{
			_putchar(*(format + i));
			i++;
			arg_num++;
			continue;
		}
		else
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				i += 2;
				arg_num++;
				continue;
			}
			else
			{
				fun_ptr = check_specifier(&format[i + 1]);

				if (fun_ptr != NULL)
				{
					i += 2;
					arg_num += fun_ptr(pa);
					continue;
				}

			}
		}
	}
	va_end(pa);
	return (arg_num);
}
