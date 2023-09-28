#include "main.h"

/**
 * _print_rev_recursion - entry point
 * @s: a character pointer
 * Description: A program that prints out a string in reverse order
 * Return: NULL
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	
	_putchar('\n');
	}
}
