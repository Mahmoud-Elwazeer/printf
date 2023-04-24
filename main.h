#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *s);
int _puts(char *s);
int reverse_string(char *s);
int print_str_rev(char *s);
int print_str_rot13(char *s);

int calc_digit(unsigned int n);
int _pow(int n, int p);
int print_int(int n);
int binary_number(unsigned int n);
int binary(unsigned int n);
int print_octal(unsigned int n);
int print_HEX(unsigned int n);
int print_hex(unsigned int n);
int put_S(char *S);
#endif
