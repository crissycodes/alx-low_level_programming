#include "main.h"

/**
 * main - prints 10 times alphabet in lowercase, followed by a new line
 * Return: Alaways 0
 */

int main(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

		_putchar('\n');
	}
}
