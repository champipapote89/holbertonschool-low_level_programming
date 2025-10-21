#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*sortir le dernier chiffre
*Return: always 0 (Succes)
*/
int main(void)
{
	int n = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d", n)

	return (0);
}
