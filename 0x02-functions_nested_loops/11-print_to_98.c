<<<<<<< HEAD
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from input to 98,
 *               in order separated by a comma followed by a space.
 * @n: The number to begin counting at.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
=======
#include "main.h"
#include <stdio.h>

/** 
* print_to_98 - prints all natural numbers from n to 98 
* @n: integer value 
* Return: Always 0 
*/

void print_to_98(int n)
{
	if (n < 98)	

	{
		while (n < 98)

		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)	

	{
		while (n > 98)

		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
>>>>>>> 573e5a0b442f5d3f4e55c0975924a6488b72cf64
