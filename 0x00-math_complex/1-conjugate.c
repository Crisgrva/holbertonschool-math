#include "holberton.h"

/**
 * display_complex_number - Write a function that
 * displays the complex numbers, followed by a new line.
 * @c: structure to print
 */

complex conjugate(complex c)
{
	complex new_c;

	if (c.re)
		new_c.re = c.re;

	if (c.im)
		new_c.im = c.im * -1;
	return (new_c);
}
