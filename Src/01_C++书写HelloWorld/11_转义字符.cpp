#include <iostream>
using namespace std;
int main11()
{
	//转义字符:用于表示一些不能显示出来的ASCI字符
	//换行符	\n
	std::cout << "hello world\n";
	//等价于
	std::cout << "hello world" << std::endl;
	//反斜杠 \\

	std::cout<<"\\"<<std::endl;
	//水平制表符\t(空格多少=8-(前面字符长度%8))
	//作用:可以整齐输出数据
	std::cout<<"aaaaaaaabbbb\thelloWorld"<<std::endl;//空格4
	std::cout<<"aa\t\thelloWorld"<<std::endl;
	std::cout<<"aaaaaa\t\thelloWorld"<<std::endl;
	system("pause");
	return 0;
}
