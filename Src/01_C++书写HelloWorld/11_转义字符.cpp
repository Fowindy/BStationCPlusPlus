#include <iostream>
using namespace std;
int main()
{
	//ת���ַ�:���ڱ�ʾһЩ������ʾ������ASCI�ַ�
	//���з�	\n
	std::cout << "hello world\n";
	//�ȼ���
	std::cout << "hello world" << std::endl;
	//��б�� \\

	std::cout<<"\\"<<std::endl;
	//ˮƽ�Ʊ��\t(�ո����=8-(ǰ���ַ�����%8))
	//����:���������������
	std::cout<<"aaaaaaaabbbb\thelloWorld"<<std::endl;//�ո�4
	std::cout<<"aa\t\thelloWorld"<<std::endl;
	std::cout<<"aaaaaa\t\thelloWorld"<<std::endl;
	system("pause");
	return 0;
}
