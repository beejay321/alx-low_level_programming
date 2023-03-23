#include "main.h"

/**
 * print_line - function that prints straight line n times.
 *
 * @n: no of times straight line is printed.
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
