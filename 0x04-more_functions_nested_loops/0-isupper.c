#include "main.h"
#include <ctype.h>

/**
 * _isupper - lorem ipsum
 * @c: lorem ipsum
 *
 * Return: true: 1, false: 0
 */
int _isupper(int c)
{
	int o;

	if (isupper(c))
	{
		o = 1;
	} else
	{
		o = 0;
	}
	return (o);
}
