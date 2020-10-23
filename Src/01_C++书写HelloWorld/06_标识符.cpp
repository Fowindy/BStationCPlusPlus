#include <iostream>
using namespace std;
//标识符的命名规则:
//1、标识符不可以是关键字;
//2、标识符是由字母、数字、下划线构成
//3、标识符第一个字符只能是字母或下划线
//4、标识符是区分大小写的
int main6()
{
	//1、标识符不可以是关键字;
	//int int = 10: 错误, 第三个int是关键字, 不可以作为变量的名称
	//2、标识符是由字母、数字、下划线构成
	int abc = 10;
	int _abc = 20;
	int _123abc = 30;
	//3、标识符第一个字符只能是字母或下划线
	//int 123abc = 40:
	//4、标识符区分大小写
	int aaa = 100;
	//cout << AAA << endl; //AA和 aa不是同一个名称

	// 建议:给变量起名的时候, 最好能够做到见名知意
	int a = 10;
	int b = 20;
#pragma region 推荐这种见名知意的方式
	int sum = a + b;
	std::cout<<"sum = "<<sum<<std::endl;
#pragma endregion

#pragma region 不推荐这种方式
	int c = a + b;
	cout << c << endl;
#pragma endregion

	system("pause");
	return 0;
}
