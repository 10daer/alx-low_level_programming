#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print last digit
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit = n % 10;

	if (last_digit > 5)
	{printf("Last digit of %d is %d and is greather than %d\n", n, last_digit, 5);
	}
	else if (last_digit == 0)
	{printf("Last digit of %d is %d and is %d\n", n, last_digit, 0);
	}
	else if (last_digit < 0)
	{printf("Last digit of %d is %d and is less than %d and not %d\n", n,
	last_digit, 6, 0);
	}
	return (0);
}
