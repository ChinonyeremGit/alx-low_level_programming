#include "main.h"

/**
 * binary_to_uint - function to convert binary to uint
 * @b: string of 0 and 1 chars
 * Return: decimal on success or 0 if b is NULL or not 0 and 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i = 0, len = 0;

	if (b == NULL)
		return (0);
	while (b[len] != 0)
		len++;
	len--;
	while (b[i] != 0)
	{
		if (b[i] < 48 || b[i] > 49)
			return (0);
		if (b[i] == '1')
			decimal = decimal + (1 * (1 << len));
		i++;
		len--;
	}
	return (decimal);
}
