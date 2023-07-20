#include "3-calc.h"
/**
 * op_add - addition of numbrers
 * @a: first integer to be added
 * @b: second integer to be added
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction of numbers
 * @a: first integer to be subtracted
 * @b: second integer to be subtracted
 * Return: subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply the integers
 * @a: first integer to be multiplied
 * @b: second integer to be multiplied
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - dividing the integers
 * @a: integer to be divided
 * @b: integer to be divided with
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - the remainder of the division
 * @a: integer
 * @b: integer
 * Return: modulos
 */
int op_mod(int a, int b)
{
	return (a % b);
}
