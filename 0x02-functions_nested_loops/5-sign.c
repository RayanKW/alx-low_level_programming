#include "main.h"

/**
 * print_sign - check main
 *
 * @n: An input number
 *
 * Description: Tohis function prints the sign of the number
 *
 * Return: 1 if a number is positive, o if a number is 0 or
 *
 * -1 if nmber is negetive
 */
int print_sign(int n)
{
	int n;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if	(n < 0)
		{
			_putchar('_');
			return (-1);
		}
		else
		{
			_putchar('0');
			return (0);
		}
}
