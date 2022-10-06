#include "main.h"

/**
 * *_strdup - function to duplicate a string
 * @str: string to duplicate
 * Return: NULL if str = NULL or pointer to duplicate of string
 */
char *_strdup(char *str)
{
	int i;
	char *arr;
	int len;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	arr = malloc(len * sizeof(arr));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < len ; i++)
	{
		arr[i] = str[i];
	}
	arr[i] = '\0';
	return (arr);
}
