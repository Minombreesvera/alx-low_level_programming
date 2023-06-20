#include "main.h"
/**
*main - To print all the alphabets in lower case followed by a new line.
*Return: 0
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
		_putchar('\n');
	}
	return (0);
}
