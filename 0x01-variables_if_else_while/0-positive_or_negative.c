#include <stdlib.h>
#include <time.h>

/**
 *  main - Entry point
 *
 *  Description: 'to print random number to the variable n'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if( n > 0)
{
printf("is positive\n");
}
else if( n==0)
{
printf("is zero\n");
}
else( n < 0)
{
printf("is negative\n");
}
return(0);
}

