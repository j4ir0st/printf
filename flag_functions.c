#include "main.h"
/**
 * f_c - function to c flag
 * @list: parameter with the variable arguments
 * Return: End function
 */
int f_c(va_list list)
{
	_putchar(va_arg(list, int));
	return (0);
}
/**
 * f_s - function to s flag
 * @list: parameter with the variable arguments
 * Return: End function
 */
int f_s(va_list list)
{
	_puts(va_arg(list, char *));
	return (0);
}
