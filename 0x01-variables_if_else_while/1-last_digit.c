#include <stdio.h>
#include <stdlib.h>
#include <time.h>



/**
 * main - The main function acts as our entry point
 *
 * This program assigns a random number to the variable n each time it runs
 *
 * Return: Always 0 (Success)
 */



int main(void)

{

	int n;



	srand(time(0));

	n = rand() - RAND_MAX / 2;



	if (n % 10 > 5)

		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);

	else if (n % 10 == 0)

		printf("Last digit of %d is %d and is 0\n", n, n % 10);

	else

		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);



	return (0);

}
