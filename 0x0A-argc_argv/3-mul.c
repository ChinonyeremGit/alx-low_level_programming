#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0 on success and 1 on error.
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (0);
	}
}

