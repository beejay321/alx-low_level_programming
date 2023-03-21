#include "main.h"

/**
 * print_sign - print sign of a number
 * @n: a number
 * Description: check code
 * Return: Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	int a = 0;

	if (n < 0)
	{
	a = -1;
	_putchar('-');
	}
	else if (n > 0)
	{
	a = 1;
	_putchar('+');
	}
	else
	{
	a = 0;
	_putchar('0');
	}
	return (a)
}
