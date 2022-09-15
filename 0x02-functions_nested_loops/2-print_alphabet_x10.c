#include "main.h"

/**
 * print_alphabet_x10 - Check main
 *
 * Description: function uses _putchar function to print
 *
 * alphabet in lowercase 10 times
 *
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char l;
	char m;

	for (m = 0; m < 10; m++)
	{
		for (l = 'a'; l <= 'z'; l++)
		_putchar(l);
	_putchar('\n');
	}
}
