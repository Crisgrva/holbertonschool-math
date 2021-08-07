#include "holberton.h"

/**
 * display_complex_number - Write a function that
 * displays the complex numbers, followed by a new line.
 * @c: structure to print
 */

void display_complex_number(complex c)
{
	if (c.re)
		printf("%.0f ", c.re);

	if (c.im)
	{
		if (c.im < 0)
		{
			c.im *= -1;
			printf("- ");
		}
		else if (c.re && c.im > 0)
			printf("+ ");
		printf("%0.fi", c.im);
	}
	printf("\n");
}
