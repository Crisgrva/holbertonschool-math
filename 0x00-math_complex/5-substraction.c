#include "holberton.h"

/**
 * substraction - Write a function that performs
 * the substraction operation to complex numbers.
 * @c1: structure to sustraction with @c2
 * @c2: structure to sustraction with @c1
 * @c3: structure to save the sustraction result
 */
void substraction(complex c1, complex c2, complex *c3)
{
	if (c1.re && c2.re)
		c3->re = c1.re - c2.re;
	if (c1.re && c1.im)
		c3->im = c1.im - c2.im;
}
