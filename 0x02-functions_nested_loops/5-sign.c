#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number to check
 *
 * Return: If true: 1, else if: 0, else: -1
 */
int print_sign(int n)
{
	int disp;

	if (n < 0)
	{
		disp = 1;
		_putchar('+');
	} else if (n == 0)
	{
		disp = 0;
		_putchar(48);
	} else
	{
		disp = -1;
		_putchar('-');
	}
	return (disp);
}
