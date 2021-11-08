#include "main.h"

/**
 * f_c - function to print c flag
 * @list: parameter with the variable arguments
 * Return: 0 on Success
 */

int f_c(va_list list)
{
	_putchar(va_arg(list, int));
	return (0);
}

/**
 * f_s - function to print s flag
 * @list: parameter with the variable arguments
 * Return: 0 on Success
 */

int f_s(va_list list)
{
	_puts(va_arg(list, char *));
	return (0);
}

/**
 * f_d - function to print d flag
 * @list: parameter with the variable arguments
 * Return: 0 on Success
 */

int f_d(va_list list)
{
	int num;

	num = va_arg(list, int);
	_print_number(num);
	return (0);
}

/**
 * f_i - function to print i flag
 * @list: parameter with the variable arguments
 * Return: 0 on Success
 */

int f_i(va_list list)
{

	int num;

	num = va_arg(list, int);
	_print_number(num);
	return (0);
}
