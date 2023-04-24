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
	int len6, len7;

    int len = _printf("%X\n", 200);
    _printf("len = %d\n", len);
    len4 = printf("%X\n", 200);
    printf("len4 = %d\n", len4);
    len6 = _printf("%x\n", 200);
    _printf("len = %d\n", len6);


    len2 = _printf("%X\n", 65535);
    _printf("len2 = %d\n", len2);
    len7 = _printf("%x\n", 65535);
    _printf("len7 = %d\n", len7);




    len3 = _printf("%X\n", -20);
    _printf("len3 = %d\n", len3);
    len5 = printf("%X\n", -20);
    printf("len5 = %d\n", len5);

    return (0);
}
