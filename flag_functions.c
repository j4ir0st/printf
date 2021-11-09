#include "main.h"

/**
 * f_c - function to print c flag
 * @list: parameter with the variable arguments
 * Return: 0 on Success
 */

int f_c(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * f_s - function to print s flag
 * @list: parameter with the variable arguments
 * Return: 0 on Success
 */

int f_s(va_list list)
{
	char *x = va_arg(list, char *);

	/*if (x != NULL)
	{*/
		return (_puts(x));
	/*}
	return (_puts("(null)"));*/
}

/**
 * f_d - function to print d flag
 * @list: parameter with the variable arguments
 * Return: 0 on Success
 */

int f_d(va_list list)
{
	int num, c = 0;

	num = va_arg(list, int);
	_print_number(num, 10);
	if (num == 0)
	{
		c++;
	}
	while (num % 10 > 0)
	{
		num = num / 10;
		c++;
	}
	return (c);
}

/**
 * f_i - function to print i flag
 * @list: parameter with the variable arguments
 * Return: 0 on Success
 */

int f_i(va_list list)
{

	int num, c = 0;

	num = va_arg(list, int);
	_print_number(num, 10);
	if (num == 0)
	{
		c++;
	}
	while (num % 10 > 0)
	{
		num = num / 10;
		c++;
	}
	return (c);
}

/**
 * f_prc - function to print percent flag
 * @list: parameter with the variable arguments
 * Return: 0 on Success
 */

int f_prc(va_list list)
{
	list += _putchar('%');
	return (1);
}
