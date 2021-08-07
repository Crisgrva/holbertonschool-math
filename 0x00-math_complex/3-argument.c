#include "holberton.h"

/**
 * argument - Write a function that returns
 * the argument of a given complex number.
 * @c: structure module with math.h
 * Return: argument of complex number
 */
double argument(complex c)
{
	double result = atan(c.im * c.re);

	return (result);
}
