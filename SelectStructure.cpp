#include <iostream>
using namespace std;
#include <ctime>
int main() {

	// 选择结构if语句
	//int a = 0;
	//int b = 0;
	//int c = 0;
	//int max=a;
	/*if (a!=1)
	{
		a = 1;
	}
	cout << a <<endl;*/


	// 猜数字
	//添加随机数种子 利用当前系统时间生成随机数，防止每次生成的数都一致
	srand((unsigned int)time(NULL));

	int num = rand() % 100 + 1;
	int val = 0;
	cout << "猜大小" << num << endl;
	while (1)
	{
		cin >> val;	
		if (val<num)
		{
			cout << "你猜小了" << endl;
		}
		else if (val > num) {
			cout << "你猜大了" << endl;
		}
		else
		{
			cout << "弄猜对了" << endl;
			break;
		}
		 

	}
 
	system("pause");
	return 0;
}