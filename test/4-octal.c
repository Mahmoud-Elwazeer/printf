#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int len2, len3, len4, len5;

    int len = _printf("%o\n", 200);
    _printf("len = %d\n", len);
    len4 = printf("%o\n", 200);
    printf("len4 = %d\n", len4);


    len2 = _printf("%o\n", 66544);
    _printf("len2 = %d\n", len2);


    len3 = _printf("%o\n", -20);
    _printf("len3 = %d\n", len3);
    len5 = printf("%o\n", -20);
    printf("len5 = %d\n", len5);

    return (0);
}
