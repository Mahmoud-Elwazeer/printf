#include "main.h"

/**
 * _strlen - Number of string
 * @s: pointer to string
 * Return: Number of string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *(s + len) != '\0'; len++)
		;
	return (len);
}

void _puts(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		_putchar(*(s + i));
}
