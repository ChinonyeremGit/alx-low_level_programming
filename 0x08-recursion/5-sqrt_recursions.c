#include "main.h"
#include <stdio.h>
/**
 * root - function to calcualte root of number
 * @low: low number
 * @high: higheer number
 * @n: number to look for the square root.
 * Return: root of number
 */
int root(int low, int high, int n);

/**
 * _sqrt_recursion - function that returns the square of a num
 * @n: number to find the square root
 * Return: square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (n);
	}
	else
	{
		int low, high;

		low = 0;
		high = n;
		return (root(low, high, n));
	}
}

/**
 * root - function to calcualte root of number
 * @low: low number
 * @high: higheer number
 * @n: number to look for the square root.
 * Return: root of number
 */
int root(int low, int high, int n)
{
	int mid;

	mid = (low + high) / 2;
	if (low == high && mid * mid != n)
	{
		printf("%d, %d\n", low, high);
		return (-1);
	}
	else
	{
		if (mid * mid == n)
		{
			return (mid);
		}
		else if (mid * mid > n)
		{
			printf("%d, %d\n", low, high);
			return (root(low, mid - 1, n));
		}
		else if (mid * mid < n)
		{
			printf("%d, %d\n", low, high);
			return (root(mid + 1, high, n));
		}
	}
	return (0);
}
