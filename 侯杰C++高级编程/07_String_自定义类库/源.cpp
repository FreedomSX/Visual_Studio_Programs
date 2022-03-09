#include <iostream>
#include "String.h"
using namespace std;

int main() {
	String str("kdsdb");
	cout << str << endl;
	String str2;
	str2 = str;
	return 0;
}