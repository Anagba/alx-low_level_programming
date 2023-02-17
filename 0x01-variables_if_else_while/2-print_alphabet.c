#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: 'A program that prints the alphabet in lowercase'
 *
 *Return: 0
 */
int main(void)
{
char a = 'a';

while (a <= 'z')
{
putchar(a);
a++;
}

putchar('\n');
return (0);
}
