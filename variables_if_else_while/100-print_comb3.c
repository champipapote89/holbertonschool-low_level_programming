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
	int n1 = 0;
	int n2 = 1;

	while (n1 <= 8 && n2 <= 9)
	{
		if (n2 > n1)
		{
			putchar(48 + n1);
			putchar(48 + n2);
			if (n1 != 8 || n2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		n2++;
		if (n2 > 9)
		{
			n2 = 0;
			n1++;
		}
	}
	putchar('\n');
return (0);
}
