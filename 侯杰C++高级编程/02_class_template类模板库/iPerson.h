#pragma once

#ifndef __iPerson__
#define __iPerson__
template<typename S>
#include <cstring>
#include <iostream>
//using namespace std;
class Person
{
private:
	char name[32];
	S age;
public:
	Person(const char* namePara, S agePara)
		:age(agePara)
	{
		strcpy_s(name, sizeof(name), namePara);
		//memcpy_s(name, strlen(name), namePara, strlen(namePara)+1);
	}
	void printInf() const {
		std::cout << name << "," << age << std::endl;
	}
};
#endif // !__iPerson__

