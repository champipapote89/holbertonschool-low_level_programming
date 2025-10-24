#include "main.h"

/**
* times_table - Entry point
*
* i: chiffre multiple
* k: chiffre multiple
* n: resultat
*Return: (0)
*
*/
void times_table(void)
	{
	int i;
	int k;
	int n = 0;

	for (i = 0; i < 10; i++)
		{
		for (k = 0; k <= 9; k++)
			{
			n = i * k;
			if (n <= 9)
			{
				if (k == 0)
				{
					_putchar(48 + n);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(48 + n);
				}
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(48 + (n / 10));
				_putchar(48 + (n % 10));
			}
			}
		_putchar('\n');
		}
	return;
	}
