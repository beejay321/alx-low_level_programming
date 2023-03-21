#include "main.h"
/**
 * _islower - checks lowercase
 * @c: an alphabet
 * Description: check above
 * Return: 1 if c is lowercaase and 0 if c is uppercase
 *
 */
int _islower(int c)
{
	char a;
	int r = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == c)
		r = 1;
	}
	return (r);
}
