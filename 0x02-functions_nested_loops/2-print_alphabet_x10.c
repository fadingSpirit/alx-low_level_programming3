#include "main.h"

/**
 * print_alphabet_x10 - to print alphabet
 *
 * Return: void
 *
 */

void print_alphabet_x10(void)
{
	char c;
	int num = 0;

	while (num <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		num++;
		_putchar('\n');
	}
}
