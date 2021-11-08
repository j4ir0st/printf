#include "main.h"
/**
 * _puts - function similar to puts but
 * in my own version
 * @c: char parameter
 * Return: use the function write to print
 * the string
 */

int _puts(char *c)
{
	int len;

	len = _strlen(c);

	return (write(1, c, len));
}
