#include <stdio.h>

/**
 * main - main block
 * Description - alphabet print
 * Return: 0
 */

int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
