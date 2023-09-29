#include "main.h"

/**
 * factorial - entry point
 * @n: the number to be calculated
 * Description: A program that calculates the factorial of a given number
 * Return: if n is less than 0, return -1
 */

int factorial(int n)
{
	if (n <= 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
		return (n * factorial(n - 1));
}
