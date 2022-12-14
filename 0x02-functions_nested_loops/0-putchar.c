#include "main.h"
/**
 * main - print -putchar followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	char printout[] = "-putchar";
	int i = 0;

	while (printout[i] != '\0')
	{
		-putchar(printout[i]);
		i++;

	}
	-putchar('\n');

	return (0);
}
