#include <stdio.h>
#include <stdlib.h>
#include <time.h>



/**
 * main - The main function is our entry point
 *
 * This program prints all the numbers of base 16 in lowercase then newline
 *
 * Return: Always 0 (Success)
 */



int main(void)

{

	int d;

	char low;



	for (d = '0'; d <= '9'; d++)

		putchar(d);

	for (low = 'a'; low <= 'f'; low++)

		putchar(low);

	putchar('\n');



	return (0);

}

Footer

© 2022 GitHub, Inc.
