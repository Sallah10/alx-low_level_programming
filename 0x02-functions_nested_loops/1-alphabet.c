#include "main.h"

/**
 * print_alphabet - Prints alphabets in lowercase followed by a newline
 *
 */
void print_alphabet(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
