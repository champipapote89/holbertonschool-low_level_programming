#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * _strcat - add the string from src to dest
 *@src: src
 *@dest: dest
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int c = 0;
	int d = 0;

	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[c] != '\0')
	{
		dest[d] = src[c];
		c++;
		d++;
	}
	dest[d] = src[c];
	return (dest);
}
