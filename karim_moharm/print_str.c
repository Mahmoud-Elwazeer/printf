#include "main.h"

/**
  * print_str - print char
  * @str: string to print
  * Return: number of string char
  */


int print_str(va_list str)
{
	char *string;
	int i = 0;

	string = va_arg(str, char *);

	if (string == NULL)
		string = "(null)";

	while (*(string + i))
	{
		_putchar(*(string + i));
		i++;
	}
	return(i);
}

