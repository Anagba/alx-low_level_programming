#include "main.h"

/**
 * _strlen_recursion - entry point
 * @s: a pointer to string
 * Description: A program that calculates the length of a string
 * Return: the length of a strings
 */

int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
		return (0);
	}
	return 1 + _strlen_recursion(s + 1);
}
