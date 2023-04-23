#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len = _printf("%b\n", -98);
    _printf("len = %d\n", len);
    return (0);
}
