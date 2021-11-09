#include "main.h"

/**
 * _printf - my own printf function
 * @format: Parameter
 * Return: c as counter
 */

int _printf(const char *format, ...)
{
	int c = 0, b = 0;
	int (*r_flag)(va_list list);
	va_list ptr;

	va_start(ptr, format);

	if (format == NULL || (*(format) == '%' && *(format + 1) == '\0'))
	{
		return (-1);
	}
	while (format != NULL && *(format + c) != '\0')
	{
		if (*(format + c) == '%')
		{
			while (*(format + c + 1) == ' ')
			{
				c++;
			}
			r_flag = get_flag(format + c + 1);
			if (r_flag != NULL)
			{
				b += r_flag(ptr);
				c++;
			}
			else if (*(format + c + 1) != 92)
			{
				b++;
				c++;
			}
		}
		else
		{
			b += _putchar(*(format + c));
		}
		c++;
	}
	va_end(ptr);
	return (b);
}
