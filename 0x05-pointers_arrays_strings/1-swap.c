#include "main.h"
/**
 *swap_int - swaps value of two integer string
 *@a: an integer to swap
 *@b: another integer to swap
 *Return: void
 */
void swap_int (int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
