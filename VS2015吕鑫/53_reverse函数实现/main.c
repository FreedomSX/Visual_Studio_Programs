#include <stdio.h>
#include <string.h>

void Reverse(char* s)
{
	
	size_t length = strlen(s);
	size_t i;
	char temp;
	for ( i = 0; i < length/2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}

int main()
{
	char a[] = "abcdef";
	printf("sizeof(a)=%d\n", sizeof(a));
	printf("strlen(a)=%d\n", strlen(a));
	Reverse(a);
	printf("%s\n", a);
	return 0;
}