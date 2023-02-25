#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description - random numbers
 * Return: 0
 */
/* more headers goes there */

int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	num = n % 10;
	/* your code goes there */
	if (num > 5)
	{
		printf("%d, is greater than 5\n", num);
	}
	else if ((num < 6) && (num < 0))
	{
		printf("%d is less than 6 and not 0\n", num);
	}
	else
	{
		printf("%d and is 0\n", num);
	}
	return (0);
}
