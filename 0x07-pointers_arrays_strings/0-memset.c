#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: the starting address of memory to be filled
 * @b: the chosen value
 * @n: number of bytes to be changed
 *
 * Return:  pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
