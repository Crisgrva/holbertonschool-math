#include "holberton.h"

/**
 * conjugate - Write a function that returns
 * the conjugate of a given complex number.
 * @c: structure to print
 * Return: new struct
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
