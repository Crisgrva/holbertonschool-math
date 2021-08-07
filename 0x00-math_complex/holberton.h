#ifndef HOLBERTON_H
#define HOLBERTON_H

/* STD LIBRARIES */
#include <stdio.h>
#include <math.h>

/* STRUCTURES */

/**
 * struct complex_type - structure “complex” where a
 * complex number a + ib is represented by two doubles.
 * @re: Real number part
 * @im: Imagine number part
 * Description: Function that displays the
 * complex numbers, followed by a new line.
 */

typedef struct complex_type
{
	double re;
	double im;
} complex;

/* PROTOTYPES */
void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);
void addition(complex c1, complex c2, complex *c3);
void substraction(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);
void division(complex c1, complex c2, complex *c3);
void complex_from_mod_arg(double m, double arg, complex *c3);

#endif
