#include <stdio.h>
/**
 * main - print all alphabets except q and e
 *
 * Return: 0
 */
int main(void)
{
	char i;
	char a = 'a';
	char z = 'z';
	char q = 'q';
	char e = 'e';

	for (i = a; i <= z; i++)
	{
		if (i != q && i != e)
		{
			putchar(i);
	}}
		putchar('\n');
		return (0);
}
