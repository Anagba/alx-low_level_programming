#include "main.h"

/**
 * _put_recursion - entry point
 * @s: a character pointer to the string
 * Description: A program that prints out a string
 * Return: void
 */


void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(*s);
}


/**
 * main - entry point
 * @s: a character pointer to the string
 * Description: A program that prints out a string
 * Return: 0
 */
int main(void)
{
	char *s = "Puts with recursion";

	_puts_recursion(*s);

	return (0);
}
