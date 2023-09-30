#include "main.h"

int primechecker(int n, int p);
/**
 * is_prime_number - entry point
 * @n: the integer to be checked
 * Description: A program that checks if an integer is prime
 * Return: returns by calling another function, else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (primechecker(n, 2));
}


int oddchecker(int x);
/**
 * primechecker - entry point
 * @n: the integer to be checked
 * @p: the integer to be iterated
 * Description: A program that checks if an integer is prime through
 * recursion
 * Return: 0 if not else, 1
 */

int primechecker(int n, int p)
{

	if (n == 2)
		return (1);

	if (n > 2)
	{
		if (p < n)
		{
			if (p > 1)
			{
				if (p == 2)
				{
					return (oddchecker(n));
				}
			}
		}
	}
	else
		return (primechecker(n, (p + 1)));
}

int oddprimechecker(int p);
/**
 * oddchecker - entry point
 * @x: the integer to be checked
 * Description: A program that checks if an integer is an odd number
 * Return: returns a function call, else, 0
 */

int oddchecker(int x)
{
	if (x % 2 == 1)
	return (oddprimechecker(x));

	else
	return (0);

}

/**
 * oddprimechecker - entry point
 * @p: the integer to be checked
 * Description: A program that checkss if an integer is an
 * odd and a prime number
 * Return: 0 if it is not a prime and an odd number, else, 1
 */

int oddprimechecker(int p)
{
		if ((p > 3) && (p % 3 == 0))
			return (0);
		else if ((p > 5) && (p % 5 == 0))
			return (0);
	else
		return (1);
}
