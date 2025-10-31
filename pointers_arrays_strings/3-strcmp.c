#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * _strcmp - add the string from src to dest
 *@s1: char a comparer
 *@s2: char a comparer
 *
 *Return: result of comparaison
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}