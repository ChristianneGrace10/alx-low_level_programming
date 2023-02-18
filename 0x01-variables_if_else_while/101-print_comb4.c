#include <stdio.h>

/**
 * main - prints all possible  combinations of three different digits,
 *        in ascending order, separated by a comma followed by a  space.
 *
 * Return: Always 0.
 */

int main(void)
{
	int digit2, digit3, digit4;

	for (digit2 = 0; digit2 < 8; digit2++)
	{
		for (digit3 = digit2 + 2; digit3 < 9; digit3++)
		{
			for (digit4 = digit3 + 1; digit4 < 10; digit4++)
			{
				putchar((digit2 % 10) + '0');
				putchar((digit3 % 10) + '0');
				putchar((digit4 % 10) + '0');

				if (digit2 == 7 && digit3 == 8 && digit4 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
