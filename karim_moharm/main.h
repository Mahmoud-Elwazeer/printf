#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int (*check_specifier(const char *))(va_list);
int print_char(va_list);
int print_str(va_list);


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
