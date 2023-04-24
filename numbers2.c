#include "main.h"

/**
  *
  *
  */

int print_octal(unsigned int n)
{
	unsigned int len = 0, pow = 1, i;
	unsigned int digit, num;
	int count = 0;

	if (n != 0)
	{
		num = n;

		while (num != 0)
		{
			num /= 8;
			len++;
		}

		for (i = 0; i < len - 1; i++)
			pow *= 8;
		for (i = 0; i < len; i++)
		{

		}


	}
}
