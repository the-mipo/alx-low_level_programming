#include <stdio.h>
/**
 * main - Entry point
 * Description: print the alphabets in lowerccase
 * Return: Always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
