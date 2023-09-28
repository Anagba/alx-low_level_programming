#include "main.h"


/**
 * _puts_recursion - entry point
 * @s: a char pointer to a string
 * Description: performs recursion in order to print the string
 * Return: NULL
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
