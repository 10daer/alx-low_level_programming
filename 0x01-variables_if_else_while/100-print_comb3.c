#include <stdio.h>

/**
 * main - print all possible combinations of a single digit separated by commas
 *
 * Return: 0
 */
int main(void)
{
		int i;

		for (i = 0; i <= 89; i++)
		{
			if (i <= 9)
			{
				putchar('0' + i);
			} else
			{
				putchar('0' + i / 10);
				putchar('0' + i % 10);
			}
			putchar(',');
			putchar(' ');
		}
		return (0);
}
