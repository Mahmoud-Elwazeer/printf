#include "main.h"

/**
 * print_uint - print integers number
 * @n: number to print
 * Return: number of digits
 */
int print_uint(unsigned int n)
{
	int len, digit;

	if (n == 0)
	{
		_putchar('0');
	}

	len = calc_digit(n);

	while (n > 0)
	{
		digit = n / _pow(10, --len);
		n -= (long)digit * (long)_pow(10, len);
		_putchar(digit + '0');
	}
	return (len);
}
