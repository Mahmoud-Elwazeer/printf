#include "main.h"

/**
  * check_specifier - check for the format specifier in printf function
  * @format: string
  * Return: function pointer
  */


int (*check_specifier(const char *format))(va_list)
/* int (*va_list) (check_specifier)(char* format) */
{
	int i = 0;

	op_t op_array[] = {
		{"c", print_char},
		{"s", print_str},
	/*	{"i", print_int}, */
	/*	{"d", print_digit}, */
		{NULL, NULL}
	};


	while (i < 2)
	{
		if (*(op_array[i].op) == *format)
			return (op_array[i].f); /* return a function */
		i++;
	}
	return (NULL);
}
