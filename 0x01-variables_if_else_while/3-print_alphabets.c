#include <stdio.h>

/**
 * main - prints Entry point.
 * Return: Always  0 (Success).
 */

int main(void)

{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);
	for (low = 'a'; low <= 'z'; low++)
	putchar(low);
	putchar('\n');
	return (0);
}
