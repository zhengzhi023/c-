#include <iostream>
using namespace std;

//常量
// 1. #define 宏常量
#define day 7



int main1() {
	
	//	变量的创建的语法 ：数据类型  变量名  =  变量初始值;
	int a = 10;
	
	// const修饰的变量
	const int month = 12;
	//month = 24: // 错误const修饰的变量也称为常量


	cout << "a=" << a << endl;
	
	cout << "一周有" << day << "天\n" << endl;
	cout << "一年有" << month << "月" << endl;
	
	
	//system("pause");


	return 0;
	

}

