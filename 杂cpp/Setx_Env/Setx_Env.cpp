#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	string mixly_path;
	cout << "������mixly�ļ��еĵ�ַ(����c:\\milxy\\):";
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
	cout << "������devcpp�ļ��еĵ�ַ(����c:\\Dev-cpp\\):";
	cin >> devcpp_path;
	cout << endl;
	
	cmd_str = "setx path \"%path%;" + devcpp_path + "\\devcpp.exe\\\"";
	system(cmd_str.c_str());
	//cout << buf << endl;
	return 0;
}