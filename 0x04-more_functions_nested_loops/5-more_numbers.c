#include "main.h"

/**
 * more_numbers - lorem ipsum
 * lorem ipsum
 *
 * Return: 0
 */
void more_numbers(void)
{
	int x;

	int y;

	for (x = 1; x <= 10; x++)
	{
		for (y = 0; y < 15; y++)
		{
			if (y > 9)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
