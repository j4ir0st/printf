#include "main.h"
/**
 * _print_number - function to print numbers
 *
 * @n: Parameter
 * @base: parameter base
 */
void _print_number(int n, int base)
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

	if (n1 / base)
	{
		_print_number(n1 / base, base);
	}

	_putchar((n1 % base) + '0');
}
