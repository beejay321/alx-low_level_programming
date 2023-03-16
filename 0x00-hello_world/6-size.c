#include <stdio.h>
/**
 * main - print out the size of the various types on the computer
 * Return: 0
*/
int main(void)
{
	char _c;
	int _i;
	long int _l;
	long long int _li;
	float _f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(_c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(_i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(_l));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(_li));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(_f));
	return (0);
}
