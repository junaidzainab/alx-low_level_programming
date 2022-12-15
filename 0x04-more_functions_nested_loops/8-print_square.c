#include "main.h"
/**
 * print_square - prints a square
 * @size: size of square
 * Return: none
 */
void print_square(int size)
{
	int 1, c;

	if (size <= 0)
		_putchar('\n');
	for (1 = 0; 1 < size; 1++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
