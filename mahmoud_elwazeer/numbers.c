#include "main.h"

/**
 * calc_digit - calculate number of digit
 * @n: Number
 * Return: Number of digit
 */
int calc_digit(int n)
{
	int count = 0;

	if (n == 0)
		return (1);	
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

/**
 * _pow - power of number
 * @n: Number
 * @p: power
 * Return: power of number
 */
int _pow(int n, int p)
{
	int result = 1;

	while (p > 0)
	{
		result *= (long)n;
		p--;
	}
	return (result);
}
/**
 * print_int - print integers number
 * @n: number to print
 * Return: number of digits
 */
int print_int(int n)
{
	int len, digit, size = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 0)
	{
		n = -n;
		_putchar('-');
		size++;
	}

	len = calc_digit(n);
	size += len;

	while (n > 0)
	{
		digit = n / _pow(10, --len);
		n -= (long)digit * _pow(10, len);
		_putchar(digit + '0');
	}
	return (size);
}
