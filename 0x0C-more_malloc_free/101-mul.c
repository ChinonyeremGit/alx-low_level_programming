#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * mul - function to multiply two numbers
 * @num1: first number
 * @num2: second number
 * Return: void
 */
void mul(int num1, int num2)
{
	printf("%d\n", num1 * num2);
}

/**
 * isdigits - function to make sure arguement vectors are all digits
 * @str: string to test
 * Return: 1 if not digit, digit if it was converted properly.
 */
int isdigits(char *str)
{
	unsigned int long i, len = 0;

	for (i = 0; i < strlen(str); i++)
	{
		if (*(str + i) >= '0' && *(str + i) <= '9')
			len++;
		else
			continue;
	}
	if (len == strlen(str))
		return (atoi(str));
	else
		return (1);
}

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (isdigits(argv[1]) == 1 || isdigits(argv[2]) == 1)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = isdigits(argv[1]);
	num2 = isdigits(argv[2]);
	mul(num1, num2);
	return (0);
}
