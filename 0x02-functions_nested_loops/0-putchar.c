#include "main.h"
/**
 * main - print -putchar followed by a new line.
 * Return: 0
 */
int main(void)
{
	char printout[] = "_putchar";
	int i = 0;

	while (printout[i] != '\0')
	{
		_putchar(printout[i]);
		i++;

	}
	_putchar('\n');

	return (0);
}
