#include <iostream>
using namespace std;
//��ʶ������������:
//1����ʶ���������ǹؼ���;
//2����ʶ��������ĸ�����֡��»��߹���
//3����ʶ����һ���ַ�ֻ������ĸ���»���
//4����ʶ�������ִ�Сд��
int main6()
{
	//1����ʶ���������ǹؼ���;
	//int int = 10: ����, ������int�ǹؼ���, ��������Ϊ����������
	//2����ʶ��������ĸ�����֡��»��߹���
	int abc = 10;
	int _abc = 20;
	int _123abc = 30;
	//3����ʶ����һ���ַ�ֻ������ĸ���»���
	//int 123abc = 40:
	//4����ʶ�����ִ�Сд
	int aaa = 100;
	//cout << AAA << endl; //AA�� aa����ͬһ������

	// ����:������������ʱ��, ����ܹ���������֪��
	int a = 10;
	int b = 20;
#pragma region �Ƽ����ּ���֪��ķ�ʽ
	int sum = a + b;
	std::cout<<"sum = "<<sum<<std::endl;
#pragma endregion

#pragma region ���Ƽ����ַ�ʽ
	int c = a + b;
	cout << c << endl;
#pragma endregion

	system("pause");
	return 0;
}
