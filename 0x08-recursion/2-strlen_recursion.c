#include "main.h"

/**
 * _strlen_recursion - entry point
 * @s: a pointer to string
 * Description: A program that calculates the length of a string
 * Return: the length of a strings
 */

int _strlen_recursion(char *s)
{
	int x;

	if (s[x] != '\0')
	{
		return (x);

		_strlen_recursion(s);
	}
}
