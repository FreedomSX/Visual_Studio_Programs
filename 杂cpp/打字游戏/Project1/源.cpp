#include <iostream>
#include <random>
//#include <time>
using namespace std;
#define STR_LENGTH 20

int main()
{
	char ch;
	char sampleStr[] = {""};
	for (size_t i = 0; i < STR_LENGTH; i++)
	{
		sampleStr[i] = char(65);
		cout << char(rand()*26 + 65);
	}
	for (size_t i = 0; i < STR_LENGTH; i++)
	{
		ch = getchar();
		if (ch == 'a')
		{

		}
	}
	return 0;
}