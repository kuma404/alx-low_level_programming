#include <stdio.h>
/**
*Main - Produce the exact same output
*
*Return: Alway 0 (Success)
*
*/
int main(void)
{
	char hire = 0;
	int dog = 0;
	long int pig = 0;
	long long int snail = 0;
	float cat = 0;

		printf("Size of char: %ld byte(s)\n", sizeof(hire));
			printf("Size of int: %ld byte(s)\n", sizeof(dog));
				printf("Size of long int: %ld byte(s)\n", sizeof(pig));
					printf("Size of long long int: %ld byte(s)\n", sizeof(snail));
						printf("Size of float: %ld byte(s)\n", sizeof(cat));
							return (0);
}
