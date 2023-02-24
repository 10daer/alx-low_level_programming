#include <stdio.h>
/**
 * main - prints all alphabets in reverse manner
 *
 * Return: 0
 */
int main(void)
{
	char i;
	char a = 'a';
	char z = 'z';

	for (i = z; i >= a; i--)
	{putchar(i);
	}
	putchar('\n');
	return (0);
}
