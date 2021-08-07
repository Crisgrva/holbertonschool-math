#include "holberton.h"

/**
 * multiplication - Write a function that performs
 * the multiplication operation to complex numbers.
 * @c1: structure to multiply with @c2
 * @c2: structure to multiply with @c1
 * @c3: structure to save the multiply result
 */
void multiplication(complex c1, complex c2, complex *c3)
{
	c3->re = (c1.re * c2.re) - (c1.im * c2.im);
	c3->im = (c1.re * c2.im) + (c1.im * c2.re);
}
