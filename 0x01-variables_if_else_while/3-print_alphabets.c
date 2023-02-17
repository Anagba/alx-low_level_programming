#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'A program that prints alphabet in lowercase
 * and then in uppercase'
 *
 * Return: 0
 */
int main(void)
{
char a = 'a';

while (a <= 'z')
{
putchar(a);
a++;
}
a = 'A';

while (a <= 'Z')
{
putchar(a);
a++;
}

putchar('\n');
return (0);
}
