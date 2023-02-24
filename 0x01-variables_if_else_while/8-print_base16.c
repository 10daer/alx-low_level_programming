#include <stdio.h>
/**
 * main - print all base 16 digits in lower case
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char x;
	char a = 'a';
	char f = 'f';

	for (i = 0; i <= 9; i++)
	{putchar(i + '0');
	}
	for (x = a; x <= f; x++)
	{putchar(x);
	}
	putchar('\n');
	return (0);

}
