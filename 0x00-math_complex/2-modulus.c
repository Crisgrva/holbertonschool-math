#include "holberton.h"

/**
 * modulus - Write a function that returns
 * the modulus of a given complex number.
 * @c: structure module with math.h
 * Return: module of complex number
 */
double modulus(complex c)
{
	double result = sqrt((c.im * c.im) + (c.re * c.re));

	return (result);
}
