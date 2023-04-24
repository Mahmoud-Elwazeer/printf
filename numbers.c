#include "main.h"

/**
 * calc_digit - calculate number of digit
 * @n: Number
 * Return: Number of digit
 */
int calc_digit(unsigned int n)
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
	unsigned int num = n;

	if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 0)
	{
		n = -n;
		num = n;
		_putchar('-');
		size++;
	}

	len = calc_digit(num);
	size += len;

	while (num > 0)
	{
		digit = num / _pow(10, --len);
		num -= (long)digit * (long)_pow(10, len);
		_putchar(digit + '0');
	}
	return (size);
}

/**
 * binary_number - convert decimal to binary
 * @n: num
 * Return: number of binary
 */
int binary_number(unsigned int n)
{
	static int size = 0;

	if (n == 0)
		return (0);
	binary_number(n / 2);
	_putchar(n % 2 + '0');
	size++;

	return (size);
}

/**
 * binary - convert decimal to number
 * @n: num
 * Return: Number of binary
 */
int binary(unsigned int n)
{
	int *ben;
	int len = 0, i = 0, j = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		ben = (int *)malloc(32 * sizeof(int));
		while (n > 0)
		{
			*(ben + i) = n % 2;
			n /= 2;
			i++;
		}
		len = i;
		for (j = i - 1; j >= 0; j--)
			_putchar(*(ben + j) + '0');

		free(ben);
	}
	return (len);
}
