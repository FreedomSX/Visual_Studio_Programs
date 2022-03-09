#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void* MemCpy(void* dest, void* res, unsigned int n)
{
	unsigned int i;
	for ( i = 0; i < n; i++)
	{
		*((char*)dest + i) = *((char*)res + i);
	}
	return (void*)dest;
}

int main()
{
	int a = 3;
	char c[4];
	int* i;
	i = (int*)MemCpy(c, &a, 4);
	printf("i=%d\n", *i);
	int j;
	for ( j = 0; j < 4; j++)
	{
		printf("c[%d]=%c\n", j, *(c + j));
	}

	return 0;
}