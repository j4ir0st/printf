#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

int _putchar(char c);
int _puts(char *c);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
int _printf(const char *format, ...);
int c_flag(const char *str);
void _print_number(int n);

#endif
