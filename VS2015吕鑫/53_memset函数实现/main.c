#include <stdio.h>
#include <memory.h>
#include <string.h>

void* MemSet(void* Dest, int c, size_t n)
{
	unsigned int i;
	for ( i = 0; i < n; i++)
	{
		*((char*)Dest + i) = (char)c;
	}
	return (void*)Dest;
}

int main()
{
	char a[] = "1234567890";
	void* p = MemSet(a, '*', 4);
	printf("p=0x%p\n", p);
	printf("a=0x%p\n", a);
	printf("*a=\"%s\"\n", a);

	return 0;
}