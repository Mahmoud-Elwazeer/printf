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
	{
		s = "(null)";
		for (i = 0; *(s + i) != '\0'; i++)
			_putchar(*(s + i));
	}
	else
	{
		for (i = 0; *(s + i) != '\0'; i++)
			_putchar(*(s + i));
	}
	return (i);
}

/**
 * reverse_string - reverse string
 * @s: pointer to string
 * Return: number of string reverse
 */
int reverse_string(char *s)
{
	static int len;

	if (*s == '\0')
		return (0);

	reverse_string(s + 1);
	_putchar(*s);
	len++;

	return (len);
}

/**
  * print_str_rev - reverse string
  * @s: string
  * Return: number of char in string
  */

int print_str_rev(char *s)
{
	int len = 0, i;

	while (*(s + len))
		len++;

	i = len - 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	return (len);
}

/**
 * print_str_rot13 - prints the rot13'ed string
 * @s: pointer to string
 * Return: Number to print
 */
int print_str_rot13(char *s)
{
	int len;
	char ch;

	for (len = 0; *(s + len) != '\0'; len++)
	{
		ch = *(s + len);
		if ((ch >= 'A' && ch <= 'M') || (ch >= 'a' && ch <= 'm'))
			_putchar(ch + ('N' - 'A'));
		else if ((ch >= 'N' && ch <= 'Z') || (ch >= 'n' && ch <= 'z'))
			_putchar(ch + ('A' - 'N'));
	}
	return (len);
}
