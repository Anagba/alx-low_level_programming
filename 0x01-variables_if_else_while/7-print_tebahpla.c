#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'A program that prints the lowercase alphabet
 * in reverse, followed by a new line'
 *
 * Return: 0
 */
int main(void)
{
char a = 'z';

while (a >= 'a')
{

putchar(a);
a--;
}
putchar('\n');
return (0);
}

