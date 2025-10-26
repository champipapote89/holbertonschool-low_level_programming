#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*prints all possible different combinations of two digits
*Return: always 0 (Succes)
*/
int main(void)
{
    int n1 = 0, n2 = 1;
    while (n1 <= 98 && n2 <= 99)
	{
		if (n2 > n1)
		{
			putchar(48 + n1 / 10);
			putchar(48 + n1 % 10);
			putchar(' ');
			putchar(48 + n2 / 10);
			putchar(48 + n2 % 10);
			if (n1 != 98 || n2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
		n2++;
		if (n2 > 99)
		{
			n2 = n1;
			n1++;
		}
	}
	putchar('\n');
return (0);
}
