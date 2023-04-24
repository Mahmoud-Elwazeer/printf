#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int len = _printf("%r\n", "Mahmoud");

	_printf("len: %d\n", len);

	return (0);
}
