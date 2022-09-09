/*
 * this is a program that solves simple calculations
 *
 */

#include <stdlib.h>
#include <time.h>
#include <studio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
		int n;
		
		rand(time(0));
		n = rand() - RAND_MAX / 2;
					
		if (n > 0)
			printf("%d is positive\n", n);
		else if (n < 0)
			printf("%d is negative\n", n);
		else
			printf("%d is zero\n" , n);
		
		/* your code goes there */
		return (0);
}

