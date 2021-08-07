#include "holberton.h"

/**
 * modulus - Write a function that returns
 * the modulus of a given complex number.
 * @c: structure module with math.h
 */
double modulus(complex c)
{
	return (sqrt((c.im * c.im) + (c.re * c.re)));
}
