#include "main.h"

/**
 * f_b - function to print b flag
 * @list: parameter with the variable arguments
 * Return: 0 on Success
 */

int f_b(va_list list)
{
	unsigned int num, c = 0;

	num = va_arg(list, int);
	_print_number(num, 2);
	while (num / 2 > 0)
	{
		num = num / 2;
		c++;
	}
	return (c + 1);
}
