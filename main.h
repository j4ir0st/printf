#ifndef _MAIN_H_
#define _MAIN_H_
/* ************* */
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/* ************* */
int _putchar(char c);
int _puts(char *c);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
int _printf(const char *format, ...);
int c_flag(const char *str);
void _print_number(int n, int base);
/* ************* */
int s_flags(va_list list, const char *x);
/* ************* */
/**
 * struct flag - Create the structure flag
 *
 * @flag: parameter to find matches
 * @f: function to be used if there is a match
 */
typedef struct flag
{
	char *flag;
	int (*f)(va_list list);
} flag_t;
/* ************* */
int (*get_flag(const char *s))(va_list list);
/* ************* */
int f_c(va_list list);
int f_s(va_list list);
int f_d(va_list list);
int f_i(va_list list);
int f_prc(va_list list);
/* ************* */
#endif
