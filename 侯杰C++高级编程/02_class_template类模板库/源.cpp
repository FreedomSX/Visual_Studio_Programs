#include <iostream>
#include "iPerson.h"
using namespace std;

int main() {
	const Person<size_t> p1("wxx", 33);
	p1.printInf();
	return 0;
}