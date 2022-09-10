#include <stdio.h>

/**
 * main - lowercase alphabets
 *
 * return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z' ; ch++)
{
		putchar(ch);
}
	putchar('\n');
	return (0);
}
