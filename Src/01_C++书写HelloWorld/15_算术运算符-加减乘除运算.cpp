#include <iostream>
using namespace std;
int main15()
{
	//�Ӽ��˳�
	int a1 = 10;
	int b1 = 3;

	std::cout << a1 << " + " << b1 << " = " << a1 + b1 << std::endl;
	std::cout << a1 << " - " << b1 << " = " << a1 - b1 << std::endl;
	std::cout << a1 << " * " << b1 << " = " << a1 * b1 << std::endl;
	//�����������,�����Ȼ������,��С������ȥ��
	std::cout << a1 << " / " << b1 << " = " << a1 / b1 << std::endl;
	int a2 = 10;
	int b2 = 20;
	std::cout << a2 << " / " << b2 << " = " << a2 / b2 << std::endl;
	//����!���������,��������Ϊ0
	int a3 = 10;
	int b3 = 0;
	//std::cout << a3 << " / " << b3 << " = " << a3 / b3 << std::endl;

	//����С���������
	double d1 = 0.5;
	double d2 = 0.22;
	cout << d1 / d2;//������Ҳ������С��
	system("pause");
	return 0;
}
