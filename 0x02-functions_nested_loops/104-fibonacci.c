#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci's number
 * starting with 1 and 2
 * followed by a new line
 * Return: 0
 */
int main(void)
{
unsigned long int p, a, b, a1, b1, a2, b2;

a = 1;
b = 2;

printf("%lu", a);

for (p = 1; p < 91; p++)
{
printf(", %lu", b);
b = b + a;
a = b - a;
}

a1 = a / 1000000000;
a2 = a % 1000000000;
b1 = b / 1000000000;
b2 = b % 1000000000;

for (p = 92; p < 99; ++p)
{
printf(", %lu", b1 + (b2 / 1000000000));
printf("%lu", b2 % 1000000000);
b1 = b1 + a1;
a1 = b1 - a1;
b2 = b2 + a2;
a2 = b2 - a2;
}

printf("\n");

return (0);
}
