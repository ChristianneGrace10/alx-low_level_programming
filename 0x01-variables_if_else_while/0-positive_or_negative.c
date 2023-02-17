#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**
 * main - prints if number is positive, zero or negative
 * Return: Always (success)
 *
 */

int main(void)

{
	int n;
	
	srand(time(o));
	n = rand() - RAND_MAX / 2;

	if (n > o)
	{
	printf("%d is positive\n", n);
	}
	else if (n == o)
	{
	printf("%d is zero\n",n);
	}
	else
	{
        printf("%d is negative\n",n);
	}
	return (o);
}
