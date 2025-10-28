#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
*swap_int - Entry point
*@a: parametre à pointer
*@b: parametre à pointer
*swaps the values of two integers.
*Return: always 0 (Succes)
*/
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
