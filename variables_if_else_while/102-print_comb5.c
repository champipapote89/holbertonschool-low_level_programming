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
	int n1, n2, n3 = 0;
	int n4 = 1;

	while (n1 <= 9 && n2 <= 8 && n3 <= 9 && n4 <= 9)
	{
		if (((n3 * 10) + n4) > ((n1 * 10 + n2) && n3 >= n1))
		{
			putchar(48 + n1);
			putchar(48 + n2);
			putchar(' ');
			putchar(48 + n3);
			putchar(48 + n4);
			if (n1 != 9 || n2 != 8 || n3 != 9 || n4 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		n4++;
		if (n4 > 9)
		{
			n4 = 0;
			n3++;
		}
		if (n3 > 9)
		{
			n3 = 0;
			n4 = 0;
			n2++;
		}
		if (n2 > 8)
		{
			n2 = 0;
			n3 = 0;
			n4 = 0;
			n1++;
		}
	}
	putchar('\n');
return (0);
}
