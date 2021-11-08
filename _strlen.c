#include "main.h"

/**
 * _strlen - function
 * @s: pointer of parameter
 * Return: return n's value
 */

int _strlen(char *s)
{
	int n = 0; /* Contador de caracteres */

	while (*s != '\0')
	{
		n++;
		s++; /* La direccion de s aumenta en 1 */
	}

	return (n); /* Retorna el valor final de n */
}
