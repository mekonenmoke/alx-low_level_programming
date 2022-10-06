#include <stdlib.h>
#include <stdio.h>

/**
 * *malloc_checked - allocates mem using malloc
 * @x:int param
 * Return:pointer to allocated memory
 */
void *malloc_checked(unsigned int x)
{
	void *p;

	p = malloc(x);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
