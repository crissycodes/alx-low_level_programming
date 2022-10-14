#include <stdio.h>

/**
 * main - print all possible combination of two-digit number
 * Return: Always 0 (success)
 */

int main(void)
{
	int digit1;
	int digit2;
	int digit3;

	for (digit1 = 0; digit1 < 8; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 9; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 < 10; digit3++)
			{
				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');
				putchar((digit3 % 10) + '0');
				if ((digit1 + digit2 + digit3) != 789)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
