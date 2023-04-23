#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int s_format(char *string)
{
	int i = 0;
	int count = 0;

	if(string)
	{
		while(string[i] != '\0')
		{
			_putchar(string[i]);
			count++;

		}
	}
}
