/*
 * File: 7-print_tebahpla.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
	int letter;

	for (letter = '9'; letter >= '0'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
