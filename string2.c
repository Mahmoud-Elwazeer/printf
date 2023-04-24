#include "main.h"

/**
  * put_s - function print string and non printable print it 
  * as ASCII in HEX
  * @S: string
  * Return: number of char in string
  */
/*
int put_S(char *S)
{
	int i = 0;
	int char_num = 0;

	if (S == NULL)
		S = "(null)";

	while (*(S + i))
	{
		if ((*(S + i) > 0 && *(S + i) < 32) || (*(S + i) >= 127))
		{
			_putchar('\\');
			_putchar('X');
			char_num += 2;
			char_num += print_HEX((char)S);
		}
		else
		{
			_putchar(*(S + i));
			char_num ++;
		}
		i++;
	}
	return (char_num);
}
*/
