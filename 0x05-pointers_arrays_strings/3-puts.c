#include "main.h"

/**
 * _puts - peint a string to the stdout
 * @str: the string
 * Return: the length of the string
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
