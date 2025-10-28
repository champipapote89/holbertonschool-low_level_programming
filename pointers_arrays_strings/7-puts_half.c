#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
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
 * puts_half - print half of a string, followed by a new line.
 * @str: pointer to the string
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int i;

	if (len % 2 == 0)
	{
		for (i = (len / 2); i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = ((len + 1) / 2); i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

