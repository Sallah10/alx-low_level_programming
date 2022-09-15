#include "main.h"

/**
 * jack_bauer - Prints every minutes of the day
 * Starting from 00:00 to 23:59
 *
 */
void jack_bauer(void)
{
	int hr;

	int min;

	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(58);
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
