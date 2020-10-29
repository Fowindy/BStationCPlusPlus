#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
using namespace std;
//queue容器:队列
class Person27
{
public:
	Person27(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};
void test27()
{
	//创建队列
	queue<Person27> q;
	//实例化person对象
	Person27 p1("唐僧", 70);
	Person27 p2("孙悟空", 1000);
	Person27 p3("猪八戒", 800);
	Person27 p4("沙僧", 600);
	//入队
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	cout << "队列的大小为:" << q.size() << endl;
	//判断只要队列不为空,查看对头,查看队尾,出队
	while (!q.empty())
	{
		cout << "队头元素为:" << q.front().m_Name << "\t" << q.front().m_Age << endl;
		cout << "队尾元素为:" << q.back().m_Name << "\t" << q.back().m_Age << endl;
		//出队
		q.pop();
	}
	cout << "队列的大小为:" << q.size() << endl;
}
int main27()
{
	test27();
	system("pause");
	return 0;
}
