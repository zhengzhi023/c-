#include <iostream>
using namespace std;
#include <ctime>
int main() {

	// ѡ��ṹif���
	//int a = 0;
	//int b = 0;
	//int c = 0;
	//int max=a;
	/*if (a!=1)
	{
		a = 1;
	}
	cout << a <<endl;*/


	// ������
	//������������ ���õ�ǰϵͳʱ���������������ֹÿ�����ɵ�����һ��
	srand((unsigned int)time(NULL));

	int num = rand() % 100 + 1;
	int val = 0;
	cout << "�´�С" << num << endl;
	while (1)
	{
		cin >> val;	
		if (val<num)
		{
			cout << "���С��" << endl;
		}
		else if (val > num) {
			cout << "��´���" << endl;
		}
		else
		{
			cout << "Ū�¶���" << endl;
			break;
		}
		 

	}
 
	system("pause");
	return 0;
}