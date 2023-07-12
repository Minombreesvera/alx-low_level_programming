#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: Thier character to print
 *
 * Return: 1
 * on error, -1 is returned and error is set properly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
