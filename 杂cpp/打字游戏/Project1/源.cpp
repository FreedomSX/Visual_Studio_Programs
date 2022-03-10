#include <iostream>
#include <random>
#include <ctime>
//#include <time>
using namespace std;
#define STR_LENGTH 3

int main()
{
	char ch;
	char sampleStr[STR_LENGTH + 1];
	sampleStr[STR_LENGTH] = '\0';
	size_t rightTimes = 0;
	size_t start_time;
	size_t end_time;
	while (true)
	{
		rightTimes = 0;
		srand(time(NULL));
		for (size_t i = 0; i < STR_LENGTH; i++)
		{
			sampleStr[i] = char(rand()%26 + (rand() % 2 ? 'a' : 'A'));
			cout << sampleStr[i];
		}
		cout << endl;
		start_time = time(NULL);
		for (size_t i = 0; i < STR_LENGTH; i++)
		{
			ch = getchar();
			if (ch == sampleStr[i])
			{
				rightTimes++;
			}
		}
		end_time = time(NULL);
		cout << "rightTimes: " << rightTimes << endl;
		cout << "Time's length: " << end_time - start_time << endl;
	}
	return 0;
}