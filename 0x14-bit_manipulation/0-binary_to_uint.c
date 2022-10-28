#include "main.h"

/**
 * _stoi - function to convert string to unsigned number
 * @b: string
 * Return: unsigned number of string
 */
unsigned int _stoi(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	while (b[i] != 0)
	{
		num = num * 10 + b[i] - '0';
		i++;
	}
	return (num);
}

/**
 * binary_to_uint - function to convert binary to uint
 * @b: string of 0 and 1 chars
 * Return: decimal on success or 0 if b is NULL or not 0 and 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	unsigned int weight = 1;
	unsigned int decimal = 0;
	unsigned int rem;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != 0)
	{
		if (b[i] < 48 || b[i] > 49)
			return (0);
		i++;
	}
	num = _stoi(b);
	while (num != 0)
	{
		rem = num % 10;
		decimal = decimal + rem * weight;
		weight = weight * 2;
		num = num / 10;
	}
	return (decimal);
}
