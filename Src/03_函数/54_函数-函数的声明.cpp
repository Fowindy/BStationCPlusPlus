#include <iostream>
#include <string>
using namespace std;
//����������
//�ȽϺ���,ʵ�������������ֽ��бȽ�,���ؽϴ�ֵ
//��������
//ע��1:main�������õĺ������û�к�������,���������main����֮��;
//ע��2:����к���������,�������ĺ����ȿ��Է���main����֮ǰҲ���Է���main����֮��
//ע��3:����������һ��Ҫ���ڱ����ú���֮ǰ
//����������
int getMax(int a, int b);
//ע��4:���������ж��(��һ�㽨��ֻ����һ��),������ֻ����һ��;
int getMax(int a, int b);
int main54()
{
	cout<<getMax(10,20)<<endl;
	system("pause");
	return 0;
}
int getMax(int a, int b)
{
	return a > b ? a : b;
}
#pragma region �����Ǵ��,��������ֻ����һ��;
//int getMax(int a, int b)
//{
//	return a > b ? a : b;
//}
#pragma endregion

