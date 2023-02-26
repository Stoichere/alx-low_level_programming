#include <stdio.h>

/**
 * main - main block
 * Description - alphabet print without e and q
 * Return: (0)
 */

int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; ++alp)
	{
		if (alp != 'e' && alp != 'q')
		{
			putchar(alp);
		}
	}
	putchar('\n');
	return (0);
}
