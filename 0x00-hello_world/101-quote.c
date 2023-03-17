#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print a line of code without using printf and puts
 *
 * Return: 1
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
