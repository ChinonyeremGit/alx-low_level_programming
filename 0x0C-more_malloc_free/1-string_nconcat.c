#include "main.h"

/**
 * *string_nconcat - function to concatenate two strings
 * @s1: first string
 * @s2: second string to join to s1
 * @n: number of s2 to join to s1
 * Return: Return pointer to concatinated strings on success or NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
	unsigned int len3;

	len3 = n;
	while (*(s2 + j))
		len2++, j++;
	if (len3 >= len2)
		len3 = len2;
	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	while (*(s1 + i))
		len1++, i++;
	arr = malloc(sizeof(char) * (len1 + len3 + 1));
	for (i = 0; i < len1; i++)
		arr[i] = s1[i];
	for (j = 0; j < len3; j++)
	{
		arr[i + j] = s2[j];
	}
	arr[i + j] = '\0';
	return (arr);
}

