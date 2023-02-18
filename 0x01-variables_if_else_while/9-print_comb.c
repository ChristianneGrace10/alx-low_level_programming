#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description:prints all single digit number of base 10
 * starting from 0,followed by a new line.
 * Return: always 0(success)
 */

int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
{	        putchar(d);
	}
	for (d = 'a'; d <= 'f'; d++)
	{       putchar(d);
	}
	putchar('\n');
	return (0);
}
