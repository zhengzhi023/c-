#include <iostream>
using namespace std;


//加减乘除
int main4() {
	//int a1 = 10;
	//int b1 = 3;
	//cout << a1 + b1 << endl;
	//cout << a1 - b1 << endl;
	//cout << a1 * b1 << endl;
	//cout << a1 / b1 << endl;  //两个整数相除结果依然是整数
	//int a2 = 10;
	//int b2 = 20;
	//cout << a2 / b2 << endl;
	//int a3 = 10;
	//int b3 = 0;
	////cout << a3 / b3 << endl; //报错，除数不可以为0
	////两个小数可以相除
	//double d1 = 0.5;
	//double d2 = 0.25;
	//cout << d1 / d2 << endl;



	//前置递增
	int a = 10;
	++a;
	int a2 = ++a * 10;
	cout << "a=" << a <<"a2=" << a2 << endl;

	//后置递增
	int b = 10;
	b++;
	int b2 = b++ * 10;
	cout <<"b=" << b << "b2=" << b2 << endl;

	// 区别
	// 前置递增 先让变量+1 然后进行表达式运算
	// 
	// 
	//后置递增 先进行表达式运算，后让变量+1

	return 0;


}
