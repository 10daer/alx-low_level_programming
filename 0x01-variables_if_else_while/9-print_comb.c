#include <stdio.h>
/**
 * main - printa all possible combination of a single digit separated by ,
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
