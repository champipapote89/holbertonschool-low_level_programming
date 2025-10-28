#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * print_array - print half of a string, followed by a new line.
 *@a: array
 *@n: number of elements
 */
 void print_array(int *a, int n)
 {
	int len = _strlen(a);
	int i = 0;

	for(i = 0; i < len; i++)
	{
		printf("%d", a[n]);
	}
 }