// Hello World.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
int output(int);
using namespace std;
int main() {
	string account;
	cout << "请输入你的用户名：";
	cin >> account;
	cout << "请输入你的密码:********\b\b\b\b\b\b\b\b";
	string key;
	cin >> key;
	system("cls");
	cout << "请再次输入你的密码:********\b\b\b\b\b\b\b\b";
	string rkey;
	cin >> rkey;
	system("cls");
	if (key == rkey) {
		cout << "创建账户成功" << endl;
		ofstream accounts;
		accounts.open("账户.txt");
		accounts << "账户名称：" << account << endl;
		accounts << "密码：" << key << endl;
	}
	else cout << "创建失败：请确认你的密码是否正确" <<endl;
	system("pause");
}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
