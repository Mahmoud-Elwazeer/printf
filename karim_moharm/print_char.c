#include "main.h"

/**
  * print_char - print char
  * @c: char ot print
  * Return: 0 if success
  */

int print_char (va_list c)
{
	char ch = va_arg(c, char);
	if (ch)
	{
		_putchar(ch);
		return (0);
	}
}
