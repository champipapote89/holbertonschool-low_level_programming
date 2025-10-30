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
 int _strcmp(char *s1, char *s2)
 {
	if (s1 < s2)
	{
		return (-1);
	}
	else if (s1 == s2)
	{
		return (0);
	}
	else
	{
		return (1);
	}
	
 }