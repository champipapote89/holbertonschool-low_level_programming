#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * reverse_array - reverse the content of an array of integers
 * @a: pointer to the array
 *@n: numbers of array's  elements
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
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
