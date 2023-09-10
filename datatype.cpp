#include <iostream>
using namespace std;

int main2() {
	//整形
	//短整型(-32768~32767)
	short nun1 = 10;
	//整形 （-2,147,483,648 ~ 2,147,483,647）
	int num2 = 10;
	//长整型
	long num3 = 10;
	//长长整形 
	long long num4 = 10;

	//sizeof关键字 统计数据类型所占用空间的大小	

	cout << "int类型所占用空间的大小" << sizeof(int) << endl;
	cout << "变量num2所占用空间的大小" << sizeof(num2) << endl;


	// 浮点型
	//1.单精度float
	//2.双精度 double
	//默认情况下编译器会把浮点数判断位双精度浮点数
	//所以在单精度浮点数后会加f去表示这个数位单精度浮点数
	float f1 = 3.1415926f;
	double d1 = 3.1415926;

	cout <<"f1=" << f1 << endl;
	cout <<"d1" << d1 << endl;
	//科学计数法
	float f2 = 3e2; // 3*10^2
	float f3 = 3e-2; // 3*0.1^2
	
	
	cout << "f2=" << f2 << endl;
	cout << "f3=" << f3 << endl;

	//字符型变量创建方式
	char ch = 'a';

	cout <<"ch：" << ch <<'\n' << endl;
	// 字符型变量占用空间大小
	cout << "char类型占用空间的大小" << sizeof(char) << endl;

	// 字符型变量对应的ASCII编码
	cout <<"字符型变量对应的ASCII编码" << (int)ch << endl;


	// 换行符 \n 和反斜杠 \\  和水平制表符 \t'
	cout << "\\ aa \n aaa\t hello \n" << endl;


	// 字符串型

	//C++风格字符串
	// 需要包含一个头文件 #include <string> 但在VS2019后已经不需要添加了
	string str1 = "this is a string \t";
	cout << str1 << endl;





	//数据输入
	int a = 0;
	cout << "请输入一个整数\n" << endl;
	cin >> a;
	cout << a << endl;
	
	
	string str = "hello";
	cout << "请给字符串str 赋值\n" << endl;
	cin >> str;
	cout << str << endl;
	
	
	return 0;



}