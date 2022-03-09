#pragma once

#include <cstring>
#include <iostream>
#include <cstdlib>
using namespace std;

class String {
public:
	String(const char*);
	String(const String&);
	String& operator = (const String&);
	String& operator = (const char*);
	~String();
	char* c_str() const { return m_data;}
private:
	char* m_data;
	friend ostream& __cout(ostream&, const String&);
};
inline ostream& __cout(ostream& os, const String& str)
{
	return os << str.m_data;
}

inline ostream& operator<< (ostream& os, const String& str)
{
	return __cout(os, str);
}

inline String::String(const char * str = NULL) {
	if (str)
	{
		m_data = new char[strlen(str) + 1];
		strcpy_s(m_data, strlen(str)+1, str);
	}
	else
	{
		m_data = new char[1];
		*m_data = '\0';
	}
}

String::~String()
{
	delete[] m_data;
}

inline String::String(const String& str)
{
	m_data = new char[strlen(str.m_data) + 1];
	strcpy_s(m_data, strlen(str.m_data) + 1, str.m_data);
}

inline String& String::operator= (const String& str)
{
	if (this == &str)
		return *this;
	delete[] m_data;
	m_data = new char[strlen(str.m_data) + 1];
	strcpy_s(m_data, strlen(str.m_data) + 1, str.m_data);
	return *this;
}
