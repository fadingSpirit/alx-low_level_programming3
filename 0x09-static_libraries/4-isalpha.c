#include "main.h"

/**
 * _isalpha - to check if c is a letter
 * @c: th integer value
 * Return: 1 if true, 0 if not
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')

	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')

	{
		return (1);
	}
	else

	{
		return (0);
	}
}
