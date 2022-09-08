#include <stdio.h>



/**
 * 
 * main - The main function is our entry point
 *
 * The program a specified line followed by a line to the standard error
 *
 * Return: Always 1 (Success)
 * 
 */

int main(void)

{

	write(STDOUT_FILENO, "and that piece of art is useful

			\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);

}
