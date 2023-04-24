#include "main.h"

/**
  * print_octal - convert dec to octal
  * @n: decimal number
  * Return: the number of digit printed
  */

int print_octal(unsigned int n)
{
	int counter = 0, rem;
	int octal[40], i, j = 0;

	while (num != 0)
	{
		rem = num % 8;
		octal[j++] = rem + '0';
		num /= 8;
	}

	for (i = j - 1; i >= 0; i--)
		counter += _putchar(octal[i]);

	return (counter);
}
