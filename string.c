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


/**
 * _puts - print string
 * @s: pointer to string
 * Return: Number of string
 */

int _puts(char *s)
{
	int i;

	if (s == NULL)
		s = "(null)";

	while (s[i])
	{
		_putchar(*(s + i));
		i++;
	}
	return (i);
}
