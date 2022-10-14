#include <stdio.h>

/**
 * main - print all possible combination of two-digit number
 * Return: Always 0 (success)
 */

int main(void)
{
	int digit1;
	int digit2;

	for (digit1 = 0; digit1 <= 98; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 99; digit2++)
		{
			putchar((digit1 / 10) + '0');
			putchar((digit1 % 10) + '0');
			putchar(' ');
			putchar((digit2 / 10) + '0');
			putchar((digit2 % 10) + '0');
			if ((digit1 != 98) || (digit2 != 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
