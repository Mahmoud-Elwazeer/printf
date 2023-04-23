#include "main.h"

/**
  * check_specifier - check for the format specifier in printf function
  * @format: string
  * Return: function pointer
  */


/**
* typedef struct sp_op
* {
*	char *op;
*	int (*f)(va_list);
* } op_t;
*/


int (*check_specifier(char *format))(va_list)
/* int (*va_list) (check_specifier)(char* format) */
{
	op_t op_array[] = {
		{"c", print_char},
		{"s", print_str},
		{"i", print_int},
		{"d", print_digit},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 4)
	{
		if (*(op_array[i].op) == *format)
			return (op_array[i].f); /* return a function */
		i++;
	}
	return (NULL);
}
