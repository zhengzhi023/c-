#include <iostream>
using namespace std;

int main2() {
	//����
	//������(-32768~32767)
	short nun1 = 10;
	//���� ��-2,147,483,648 ~ 2,147,483,647��
	int num2 = 10;
	//������
	long num3 = 10;
	//�������� 
	long long num4 = 10;

	//sizeof�ؼ��� ͳ������������ռ�ÿռ�Ĵ�С	

	cout << "int������ռ�ÿռ�Ĵ�С" << sizeof(int) << endl;
	cout << "����num2��ռ�ÿռ�Ĵ�С" << sizeof(num2) << endl;


	// ������
	//1.������float
	//2.˫���� double
	//Ĭ������±�������Ѹ������ж�λ˫���ȸ�����
	//�����ڵ����ȸ���������fȥ��ʾ�����λ�����ȸ�����
	float f1 = 3.1415926f;
	double d1 = 3.1415926;

	cout <<"f1=" << f1 << endl;
	cout <<"d1" << d1 << endl;
	//��ѧ������
	float f2 = 3e2; // 3*10^2
	float f3 = 3e-2; // 3*0.1^2
	
	
	cout << "f2=" << f2 << endl;
	cout << "f3=" << f3 << endl;

	//�ַ��ͱ���������ʽ
	char ch = 'a';

	cout <<"ch��" << ch <<'\n' << endl;
	// �ַ��ͱ���ռ�ÿռ��С
	cout << "char����ռ�ÿռ�Ĵ�С" << sizeof(char) << endl;

	// �ַ��ͱ�����Ӧ��ASCII����
	cout <<"�ַ��ͱ�����Ӧ��ASCII����" << (int)ch << endl;


	// ���з� \n �ͷ�б�� \\  ��ˮƽ�Ʊ�� \t'
	cout << "\\ aa \n aaa\t hello \n" << endl;


	// �ַ�����

	//C++����ַ���
	// ��Ҫ����һ��ͷ�ļ� #include <string> ����VS2019���Ѿ�����Ҫ�����
	string str1 = "this is a string \t";
	cout << str1 << endl;





	//��������
	int a = 0;
	cout << "������һ������\n" << endl;
	cin >> a;
	cout << a << endl;
	
	
	string str = "hello";
	cout << "����ַ���str ��ֵ\n" << endl;
	cin >> str;
	cout << str << endl;
	
	
	return 0;



}