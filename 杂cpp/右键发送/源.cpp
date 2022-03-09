#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[])
{
	system("@echo off");
	cout << argc << endl;
	for (size_t i = 1; i < argc; i++)
	{
		cout << argv[i] << endl;
	}
	char* filename = argv[1];
	FILE* fp;
	fopen_s(&fp, "present_account.txt", "r");
	char content[50];
	fread(content, sizeof(content), sizeof(content), fp);
	content[strchr(content, '\n') - content] = '\0';
	cout << content << endl;
	char toPath[100] = "\0";
	strcat_s(toPath, _countof(toPath), " D:\\Programs\\");
	strcat_s(toPath, _countof(toPath), content);
	strcat_s(toPath, _countof(toPath), "\\");
	strcat_s(toPath, _countof(toPath), filename);
	char cmd[200]="\0";
	strcat_s(cmd, _countof(cmd), "echo f|xcopy ");
	strcat_s(cmd, _countof(cmd), filename);
	strcat_s(cmd, _countof(cmd), toPath);
	strcat_s(cmd, _countof(cmd), " /d");
	cout << cmd << endl;
	system(cmd);
	system("pause");
	return 0;
}