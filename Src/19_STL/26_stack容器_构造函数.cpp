#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <stack>
using namespace std;
//26_stack容器_构造函数
void test26()
{
	//特点:符合先进后出数据结构
	stack<int> s;
	//入栈
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	cout << "栈的大小为:" << s.size() << endl;//5
	//只要栈不为空,查看栈顶,并且执行出栈操作
	while (!s.empty())
	{
		//打印栈顶元素
		cout << s.top() << endl;
		//出栈
		s.pop();
	}
	cout << "栈的大小为:" << s.size() << endl;//0
}
int main26()
{
	test26();
	system("pause");
	return 0;
}
