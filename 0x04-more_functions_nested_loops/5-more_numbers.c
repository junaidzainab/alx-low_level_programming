#include "main.h"
/**
 * more_numbers - print the numbers, from 0 to 14, 10 times
 * Return: from 0 to 14 10 times
 */
void more_numbers(void)
{
	int 1, c;
	for (1 = 0; 1 <= 10; 1++)
	{
	for (c = 0; c <= 14; c++)
	{
		if (c > 9)
			_putchar((c / 10) + '0')
				_putchar((c % 10) + '0');
	}
	_putchar('\n');
	}
}
