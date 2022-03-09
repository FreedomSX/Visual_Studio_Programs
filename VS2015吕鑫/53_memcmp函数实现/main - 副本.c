#include <stdio.h>
#include <memory.h>

int MemCmp(void* buf1, void* buf2, unsigned int n)
{
	size_t i;
	for ( i = 0; i < n; i++)
	{
		if (*((char*)buf1+i) > *((char*)buf2+i))
		{
			return 1;
		}
		else if (*((char*)buf1 + i) < *((char*)buf2 + i))
		{
			return -1;
		}
		else
		{
			;
		}
	}
	return 0;
}

int main()
{
	printf("%d\n", memcmp("123", "122", 3));
	printf("%d\n", memcmp("123", "124", 3));
	printf("%d\n", memcmp("123", "123", 3));

	printf("%d\n", MemCmp("123", "122", 3));
	printf("%d\n", MemCmp("123", "124", 3));
	printf("%d\n", MemCmp("123", "123", 3));
	return 0;
}