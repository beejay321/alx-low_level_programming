#include "main.h"
/**
 * _isalpha - checks if alphabet
 * @c: an alphabet
 * Description: check above
 * Return: 1 if c is alphabet  and 0 if not
 *
 */
int _isalpha(int c)
{
	char lower, upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isalphabet = 1;
		}
	}
	return (isalphabet);
}
