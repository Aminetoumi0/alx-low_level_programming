#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: always
 */
int main(void)
{
	char ch;

	for (ch = "z"; ch >= "a"; ch--)
	{
		putchar(ch);
	}
	putchar("\n");
	return (0);
}
