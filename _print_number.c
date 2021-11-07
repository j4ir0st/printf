#include "main.h"
/**
 * _print_number - function to print numbers
 *
 * @n: Parameter
 */
void _print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}

	if (n1 / 10)
	{
		_print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}
