#include <stdio.h>
#include <unistd.h>

/**
 * main - start program
 * Description: Print number 0 to 10
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
