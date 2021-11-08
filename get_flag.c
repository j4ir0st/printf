#include "main.h"

/**
 * get_flag - function for getting de value after %
 * @s: pointer of parameter
 * @list: a structure argument
 * Return: return flags function or 0 if doesn´t match
 */

int (*get_flag(const char *s))(va_list list)
{
	int i = 0;

	while (i < 4)
	{
		if (s[0] == flags[i].flag[0])
		{
			return (flags[i].f);
		}
		i++;
	}
	return(0);
}
