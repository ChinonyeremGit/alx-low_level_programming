#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - Reverses string
 * @s: string to reverse
 *
 * Return: null
 */
void rev_string(char *s)
{
	int len, i;
	char temp;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
