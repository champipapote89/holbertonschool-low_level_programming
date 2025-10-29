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
/**
 * _atoi - convert a string to an integer
 *@s: parametre à convertir
 *Return: 0
 */
int _atoi(char *s)
{
	int i = 0;
	int result = 0;
	int digit = 0;
	int neg = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			neg += 1;
		}
		else if ((s[i] < '0' || s[i] > '9') && result > 0)
		{
			break;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			result = result * 10 + digit;
		}
		i++;
	}
	if (neg % 2 == 1)
	{
		result = result * -1;
	}

	return (result);
}
