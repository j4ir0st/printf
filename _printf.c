#include "main.h"
/**
 * _printf - my own printf function
 *
 * @format: Parameter
 *
 * Return: End program
 */
int _printf(const char *format, ...)
{
	int c = 0, num;

	va_list ptr;
	va_start(ptr, format);
	while ((format != NULL) && *(format + c) != '\0')
	{
		if (*(format + c) == '%')
		{
			switch (*(format + c + 1))
			{

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
