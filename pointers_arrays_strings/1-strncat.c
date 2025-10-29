#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * _strncat - add n string from src to dest
 *@src: src
 *@dest: dest
 *@n: numbers of strings
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c = 0;
	int d = 0;

	while (dest[d] != '\0')
	{
		d++;
	}
	while (c < n && src[c] != '\0')
	{
		dest[d] = src[c];
		c++;
		d++;
	}
	return (dest);
}
