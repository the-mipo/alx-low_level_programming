#include <stdio.h>

/**
 * main - prints the lowercase alphabets in reverse
 * follwed by a new line
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
