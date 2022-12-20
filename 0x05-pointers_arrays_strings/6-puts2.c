#include "main.h"
/**
* _strlen - return the length of a string.
* @s: pointer to a char
* Return: length of a string
*/

int _strlen(char *s)
{
	int l, i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	1 = i;
	return (l);
}

/**
* puts2 - prints one char out of 2 of a string
* @str: a pointer to string
* Return: nothing
*/

void puts2(char *str)
{
	int i;

	int size = _strlen(str);

	for (i = 0; i < size; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
