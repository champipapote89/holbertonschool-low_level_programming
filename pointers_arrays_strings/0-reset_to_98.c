#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
*reset_to_98 - Entry point
*@n: parametre à pointer
*take a pointer to an int as parameter and updates the value it points to to 98
*Return: always 0 (Succes)
*/
void reset_to_98(int *n)
{
	*n = 98;
}
