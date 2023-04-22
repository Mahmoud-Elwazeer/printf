#include <unistd.h>

/**
 * _putchar - print character
 * @c: The charater to print
 * Return: on Success 1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
