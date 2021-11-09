#include "main.h"
/**
 * get_flag - function for getting de value after %
 * @s: pointer of parameter
 * Return: return flags function or 0 if doesn´t match
 */

int (*get_flag(const char *s))(va_list list)
{
	flag_t flags[] = {
		{"c", f_c},
		{"s", f_s},
		{"i", f_i},
		{"d", f_d},
		{"%", f_prc},
		{NULL, NULL}
	};

	int i = 0;

	while (i < 5)
	{
		if (s[0] == flags[i].flag[0])
		{
			return (flags[i].f);
		}
		i++;
	}
	if(flags[i].f != NULL)
	{
		_putchar('%');
	}
	return (flags[i].f);
}
