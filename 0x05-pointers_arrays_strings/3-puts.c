#include "main.h"

/**
 * _puts - prints a new line wwith a trailing newline
 * @str: string
 *
 * Return: null
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
