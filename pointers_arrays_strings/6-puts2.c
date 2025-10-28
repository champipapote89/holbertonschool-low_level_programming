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
 * puts2 - print every other character of a string, followed by a new line.
 * @str: pointer to the string
 *
 * Return: every other character of a string, followed by a new line.
 */
void puts2(char *str)
{
	int strlen = _strlen(str);
	int i;

	for (i = 0; i < strlen; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
