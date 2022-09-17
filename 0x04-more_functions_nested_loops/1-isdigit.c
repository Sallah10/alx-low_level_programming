#include "main.h"
#include <ctype.h>

/**
 * _isdigit - lorem ipsum
 * @c: lorem ipsum
 *
 * Return: true: 1, false: 0
 */
int _isdigit(int c)
{
	int disp;

	if (isdigit(c))
	{
		disp = 1;
	} else
	{
		disp = 0;
	}
	return (disp);
}
