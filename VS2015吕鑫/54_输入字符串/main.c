#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define LEN 10

char* Trim(char* str)
{
	int length = strlen(str);
	char c;
	int i = 0;
	do
	{
		c = *(str + i);
		i++;
	}while (!isalnum(c));
	i--;
	str -= i;
	while (isalnum(*(str + i)))
	{
		i++;
	}
	*(str + i) = '\0';
	return str;
}

int main()
{
	int a[LEN] = {0};
	char s[100];
	printf("请输入随机1到10个整数：【以空格间隔】");
	gets(s);
	char* nextCount;
	a[0] = atoi(Trim(strtok_s(s, " ", &nextCount)));
	int i = 1;
	char* str;
	while (str = strtok_s(NULL, " ", &nextCount))
	{
		a[i] = atoi(Trim(str));
		i++;
	}
	int length = i;
	for ( i = 0; i < length; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}