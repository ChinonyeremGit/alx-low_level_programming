#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - prints other character starting with the first one
 * @str: string
 *
 * Return: null
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0 || i % 2 == 2)
		{
			printf("%c", *(str + i));
		}
	}
	putchar(10);
}
