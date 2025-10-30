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
	if (s1 < s2)
	{
		return (-15);
	}
	else if (s1 == s2)
	{
		return (0);
	}
	else
	{
		return (15);
	}
}
