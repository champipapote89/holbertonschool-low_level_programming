#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * _strncpy - add the string from src to dest
 *@src: src
 *@dest: dest
 *@n: number max of char
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;
	int d = 0;

	while (c < n && src[c] != '\0')
	{
		dest[d] = src[c];
		c++;
		d++;
	}
	if (src[c] < n)
	{
		dest[d] = '\0';
	}
	return (dest);
}