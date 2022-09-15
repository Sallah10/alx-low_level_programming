#include "main.h"
#include <ctype.h>

/**
 * _islower - Checks for lowercase character
 * @c: Character to check
 *
 * Return: Lowercase? 0
 * Else? 1
 */
int _islower(int c)
{
	int disp;

	if (islower(c))
	{
		disp = 1;
	} else
	{
		disp = 0;
	}
	return (disp);
}
