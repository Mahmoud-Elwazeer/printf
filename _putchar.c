#include <unistd.h>
#include "main.h"

/**
  * _putchar - print one char 
  * @c: char
  * Return: 1 on success -1 incase error
  */
int _putchar(char c)
{
	return (write (1, &c, 1));
}

