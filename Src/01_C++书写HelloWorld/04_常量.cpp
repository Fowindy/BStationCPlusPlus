#include <iostream>
using namespace std;
//�����Ķ��巽ʽ
//1.#define�곣��(����һ����Ҫ�ӷֺ�)
#define Day 7
//2.const���εı���
const int month = 12;
int main()
{
	//Day = 14;//����:Day�ǳ���,һ���޸ľͻᱨ��
	std::cout<<"һ�ܹ���:"<<Day<<"��"<<std::endl;
	//month = 13;//����:const���εı���Ҳ��Ϊ����,һ���޸ľͻᱨ��;
	std::cout<<"һ�깲��:"<<month<<"���·�"<<std::endl;
	system("pause");
	return 0;
}
