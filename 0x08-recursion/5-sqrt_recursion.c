#include "main.h"
/**
 * _sqrt_recursion - entry point
 * @n: the integer to be square rooted
 * Description: A program that performs square root to figure read to it
 * Return: returns the natural square root value, else if
 *  n doesn't have a natural square root return -1
 */
int _sqrt_recursion(int n)
{

	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
		return (ProperSqrt(n, 1));
}

/**
 * ProperSqrt - entry point
 * @n: the integer to be square rooted
 * @p: the integer to be iterated over
 * Description: A program that takes in two int and performs
 * the square root
 * Return: p
 */

int ProperSqrt(int n, int p)
{
	if (n < 0)
	{
	return (-1);
	}
	if (n == p * p)
	{
		return (p);
	}
	else
		ProperSqrt(n, p + 1);
}
