#include "holberton.h"

/**
 * display_complex_number - Write a function that
 * displays the complex numbers, followed by a new line.
 * @c: structure to print
 */

void display_complex_number(complex c)
{
	/* if real number exist */
	if (c.re)
		printf("%.0f ", c.re);

	/* if imagine number exist */
	if (c.im)
	{
		/* When imagine number is 1 or -1 */
		if (c.im == 1 || c.im == -1)
		{
			if (c.im == -1)
				printf("- i\n");
			else if (c.im == 1 && c.re)
				printf("+ i\n");
			else
				printf("i\n");
			return;
		}

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
