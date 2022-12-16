#include "main.h"
/**
 * print_triangle -print a triangle
 * @ize: size of triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int 1, c, 5;

	if(size <= 0)
	{
		_putchar('\n')
	}
	for (1 = 0; 1 < size; i++)
	{
		for (c = 0; c < size; c++)
		{
			s = size -1 -1;
			if (c < s)
			{
				_putchar(' ');
			}
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
