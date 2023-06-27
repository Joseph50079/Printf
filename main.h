#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/* for myprintf.c */
int _printf(const char *format, ...);

int checker(va_list, const char *);
int format_specifiers(const char *, va_list, int *);

/* function for format identifier */
int puts_string(char *str);
int for_char(va_list ap);
int for_string(va_list ap);
int for_int_d(va_list ap);
int for_int_i(va_list ap);
int for_int_binary(va_list ap);

/* tools */
char *converter(int, int);
void reverse(char *s);
int printInteger(int num);
/* struct prototype */

/**
  * struct specifiers - struct for function pointer
  * @symbol: for characters
  * @func:  for function pointers
  */
typedef struct specifiers
{
char symbol;
int (*func)(va_list);
} spec;


#endif
