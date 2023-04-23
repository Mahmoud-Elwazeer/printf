#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 when success
 */
int main(void)
{
	int len;
	int len2;
	int len3;
	int len4, len5, len6;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	len3 = _printf("Ali%s\n", NULL);
	len4 = printf("Ali%s\n", "ali");
	printf("len: %d\n", len3);
	printf("len: %d\n", len4);
	len5 = _printf(NULL);
	len6 = printf("NULL\n");
	printf("%d , %d\n", len5, len6);
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	return (0);
}
