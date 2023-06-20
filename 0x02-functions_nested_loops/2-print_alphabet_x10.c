#include "main.h"
/**
*print_alphabet_x10 - TO print 10x the alphabet in lower case.
*/
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;
	while (i  < 0)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
