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
			case 'c': /* char */
				_putchar(va_arg(ptr, int));
				c++;
				break;

			case 's': /* string */
				_puts(va_arg(ptr, char *));
				c++;
				break;
			case 'd': /* decimal */
				num = va_arg (ptr, int);
				_print_number(num);
				c++;
				break;
			case 'i': /* integer */
				num = va_arg (ptr, int);
				_print_number(num);
				c++;
				break;
			default:
				_putchar('%');
				c++;
				continue;
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
