#include "main.h"
/**
*print_sign - To print the sign of a number.
*@n:is the int to checked
*Return: 1 and prints + if n is greater than zero,
*0 and prints 0 if n is zero,-1 and prints - if n is less than zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
	}
	else if (n <= -1)
	{
		_putchar('-');
	}
	else
	{
		_putchar(0);
	}
	return (1);
}
