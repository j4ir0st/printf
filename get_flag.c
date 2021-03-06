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
		{"b", f_b},
		{NULL, NULL}
	};

	int i = 0;

	while (i < 6)
	{
		if (s[0] == flags[i].flag[0])
		{
			return (flags[i].f);
		}
		i++;
	}
	return (flags[i].f);
}
