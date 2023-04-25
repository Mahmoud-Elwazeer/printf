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

	for (i = j - 1; i >= 0; i--)
		counter += _putchar(octal[i]);

	return (counter);
}


/**
  * print_HEX - convert decimal to uppercase HEX
  * @n: decimal number
  * Return: the number of digit printed
  */

int print_HEX(unsigned int n)
{
	int rem, i = 0, j, count = 0;
	int *hex = NULL;

	hex = (int *)malloc(40 * sizeof(int));

	if (hex != NULL)
	{
		while (n != 0)
		{
			rem = n % 16;
			if (rem < 10)
			{
				hex[i] = 48 + rem;
				i++;
			}
			else
			{
				hex[i] = 55 + rem;
				i++;
			}

			n /= 16;
		}

		for (j = i - 1; j >= 0; j--)
			count += _putchar(hex[j]);

		free(hex);
		return (count);
	}
	else
		return (-1);
}




/**
  * print_hex - convert dec to lowercase hex
  * @n: decimal number
  * Return: the number of digit printed
  */

int print_hex(unsigned int n)
{
	int rem, i = 0, j, count = 0;

	int *hex = NULL;

	hex = (int *)malloc(40 * sizeof(int));

	if (hex != NULL)
	{
		while (n != 0)
		{
			rem = n % 16;
			if (rem < 10)
				hex[i++] = 48 + rem;
			else
				hex[i++] = 87 + rem;

			n /= 16;
		}

		for (j = i - 1; j >= 0; j--)
			count += _putchar(hex[j]);

		free(hex);
		return (count);
	}
	else
		return (-1);
}

/**
 * print_0x_hex - print 0x+hex Number
 * @n: number
 * Retunr: number printed
 */
int print_0x_hex(unsigned int n)
{
	int x;

	_putchar('0');
	_putchar('x');
	x = print_hex(n);

	return (x + 2);
}
