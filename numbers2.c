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


	while (n != 0)
	{
		rem = n % 8;
		octal[j++] = rem + '0';
		n /= 8;
	}

	for (i = j -1; i >= 0; i--)
		counter += _putchar(octal[i]);

	return (counter);
}


/**
  * print_hex - convert dec to lowercase hex
  * @n: decimal number
  * Return: the number of digit printed
  */



