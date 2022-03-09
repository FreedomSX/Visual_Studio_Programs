#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	string mixly_path;
	cout << "请输入mixly文件夹的地址(例：c:\\milxy\\):";
	cin >> mixly_path;
	cout << endl;

	string cmd_str;
	cmd_str = "setx path \"%path%;" + mixly_path + "\"";
	system(cmd_str.c_str());
	cmd_str = "setx path \"%path%;" + mixly_path + "mixpyBuild\\win_python3\\\"";
	system(cmd_str.c_str());
	cmd_str = "setx path \"%path%;" + mixly_path + "mixpyBuild\\win_python3\\Scripts\\\"";
	system(cmd_str.c_str());

	string devcpp_path;
	cout << "请输入devcpp文件夹的地址(例：c:\\Dev-cpp\\):";
	cin >> devcpp_path;
	cout << endl;
	
	cmd_str = "setx path \"%path%;" + devcpp_path + "\\devcpp.exe\\\"";
	system(cmd_str.c_str());
	//cout << buf << endl;
	return 0;
}