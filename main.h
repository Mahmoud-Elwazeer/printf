#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int (*check_specifier(char *format))(va_list);
int print_char(va_list); /**/
int print_mod(va_list); /**/
int print_str(va_list); /**/


/**
  * struct sp_op - Struct for specofoer operator
  *
  * @op: The operator
  * @f: The function pointer
  */
typedef struct sp_op
{
	char *op;
	int (*f)(va_list);
} op_t;

#endif
