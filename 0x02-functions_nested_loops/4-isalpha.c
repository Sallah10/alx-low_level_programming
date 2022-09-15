#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Checks for alphabetic character
 * @c: Character to check
 *
 * Return: True: 1, else: 0
 */
int _isalpha(int c)
{
	int disp;

	if (isalpha(c))
	{
		disp = 1;
	} else
	{
		disp = 0;
	}
	return (disp);
}
