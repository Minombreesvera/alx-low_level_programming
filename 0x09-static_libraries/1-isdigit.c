#include "main.h"
/**
 * _isdigit - check for a digit 0 to 9
 *@b: intiger to be checked
 *Return: 0 or 1
 */
int _isdigit(int b)
{
	if (b >= '0' && b <= '9')
		return (1);
	else
		return (0);
}
