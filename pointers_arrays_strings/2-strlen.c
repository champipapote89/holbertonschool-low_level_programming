#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
*_strlen - Entry point
*@s: parametre à compter
*return the length of a string.
*Return: always 0 (Succes)
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
