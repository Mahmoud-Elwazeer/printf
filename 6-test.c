#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int len1, len2;

	len1 = _printf("x = %p\n", "ali");
	len2 = printf("x = %p\n", (void *)"ali");

	printf("len1 = %d\n", len1);
	printf("len2 = %d\n", len2);

	return (0);
}
