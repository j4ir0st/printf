#include "main.h"

/**
 * _printf - my own printf function
 * @format: Parameter
 * Return: c as counter
 */

int _printf(const char *format, ...)
{
	int c = 0;
	int (*r_flag)(va_list list);
	va_list ptr;

	va_start(ptr, format);

	while (*(format + c) != '\0')
	{
		if (*(format + c) == '%' && *(format + c + 1) == '%')
		{
			_putchar('%');
			c++;
		}
		else if (*(format + c) == '%')
		{
			r_flag = get_flag(format + c + 1);

			if (r_flag != NULL)
			{
				r_flag(ptr);
				c++;
			}
		}
		else
		{
			_putchar(*(format + c));
		}
		c++;
	}

	va_end(ptr);

	return (c);
}
