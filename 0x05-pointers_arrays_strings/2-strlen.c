#include "main.h"
/**
 *_strlen - Function that returns the length of a string.
 *@s: String pointer to the string whose length is to be found.
 *Return: length of the string.
 */

int _strlen(char *s)
{
	int p = 0;

	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}

