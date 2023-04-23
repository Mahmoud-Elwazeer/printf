#include "main.h"

/**
  * print_char - print char
  * @c: char ot print
  * Return: number of char printed and -1 if failed
  */

int print_char (va_list c)
{
	char ch = va_arg(c, int);
	int count_char = 0;

	if (ch)
	{
		count_char = _putchar(ch);
		return (count_char);
	}
	return (0); 
}
