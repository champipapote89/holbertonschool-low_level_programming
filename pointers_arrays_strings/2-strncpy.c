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

	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	if (*src < n)
	{
		dest[c] = '\0';
	}
	return (dest);
}
