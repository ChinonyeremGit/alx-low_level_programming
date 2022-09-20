#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: input string
 *
 * Return: null
 */
void puts_half(char *str)
{
	int i, len;

	len = strlen(str);
	if (len % 2 == 0)
	{
	for (i = len / 2; i < len; i++)
	{
		putchar(*(str + i));
	}
	}
	else
	{
	for (i = (len / 2) + 1; i < len; i++)
	{
		putchar(*(str + i));
	}
	}
	putchar(10);
}
