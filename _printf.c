#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
  *
  *
  *
  */

int _printf(const char *format, ...)
{
	int arg_num = 0;
	va_list pa; 
	int i = 0;
	
	va_start(pa, format);
	if (format == NULL)
		return (-1);
	
	while (format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			i++;
			arg_num++;
			continue;
		}
		else
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				i++;
				arg_num++;
				continue;
			}
		}
	}
	return (arg_num);

}
