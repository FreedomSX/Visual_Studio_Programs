#pragma once
#ifndef __ishape__
#define __ishape__
#include <cmath>
#include <iostream>

using namespace std;
class Rect {
private:
	size_t length;
	size_t width;
public:
	Rect(size_t l, size_t d) :
		length(l), width(d)
	{
		cout << "init" << endl;
	}
	size_t Area() const {
		return length * width;
	}
};
#endif // !__ishape__

