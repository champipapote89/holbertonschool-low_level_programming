#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
*main - FizzBuzz
*
*Return: always 0 (Succes)
*/

int main(void)
{
	int i = 1;

	for (; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
			else if (i == 100)
		{
			printf("Buzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
		printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
