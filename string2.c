#include "main.h"

/**
  * put_S - function print string and non printable print it
  * as ASCII in HEX
  * @S: string
  * Return: number of char in string
  */

int put_S(char *S)
{
	unsigned int i = 0;
	int char_num = 0;

	if (S == NULL)
		S = "(null)";

	while (*(S + i))
	{
		if (((*(S + i) > 0) && (*(S + i) < 32)) || (*(S + i) >= 127))
		{
			_putchar('\\');
			_putchar('X');
			char_num += 2;

			if (*(S + i) < 16)
			{
				_putchar(48);
				char_num++;
			}

			char_num += print_HEX(*(S + i));
		}
		else
		{
			_putchar(*(S + i));
			char_num++;
		}
		i++;
	}
	return (char_num);
}



/**
 * put_S2 - convert to special chars
 * @S2: string
 * Return: int
 */

int put_S2(char *S2)
{
	int i, len = 0;
	char *null = "(null)";

	if (S2 == NULL)
	{
		for (i = 0; null[i]; i++)
		_putchar(null[i]);
		return (i);
	}

	for (i = 0; S2[i] != '\0'; i++)
	{
		if (S2[i] < 32 || S2[i] >= 127)
		{
			_putchar('\\');
			_putchar('X');
			len = len + 2;

			if (S2[i] < 16)
			{
				_putchar(48);
				len++;
			}

			len += print_HEX(S2[i]);
		}
		else
		{
			_putchar(S2[i]);
			len++;
		}
	}
	return (len);
}
