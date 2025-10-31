#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverse a string
 * @s: pointer to the string
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n;
	int temp = 0;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}

