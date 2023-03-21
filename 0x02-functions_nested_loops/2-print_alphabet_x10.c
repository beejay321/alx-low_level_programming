#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet ten times
 * Description: check main
 * Return: 0 (success)
 */

void print_alphabet_x10(void)
{
	int i;
	char alph;

	for (i = 0; i < 10; i++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
			_putchar('\n');
		}
	}
}
