#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copies the string from src to dest
 *@src: src
 *@dest: dest
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = src[c];
	return (dest);
}
