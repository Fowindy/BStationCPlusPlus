#include <iostream>
#include <string>
#include <vector>
using namespace std;
//15_vector容器_vector插入和删除
/*
push_back(ele);                                         //尾部插入元素ele
pop_back();                                             //删除最后一个元素
insert(const_iterator pos, ele);						//迭代器指向位置pos插入元素ele
insert(const_iterator pos, int count,ele);				//迭代器指向位置pos插入count个元素ele
erase(const_iterator pos);								//删除迭代器指向的元素
erase(const_iterator start, const_iterator end);		//删除迭代器从start到end之间的元素
clear();                                                //删除容器中所有元素
*/
void PrintVector15(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test15()
{
	vector<int> v1;
	//尾插
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	PrintVector15(v1);//10 20 30 40 50
	//尾删
	v1.pop_back();
	PrintVector15(v1);//10 20 30 40

	//插入
	//再v1.begin()的位置插入一个元素100
	v1.insert(v1.begin(), 100);//第一个参数是迭代器
	PrintVector15(v1);//100 10 20 30 40
	//重载版本,最前面插入两个为1000的元素
	v1.insert(v1.begin(), 2, 1000);
	PrintVector15(v1);//1000 1000 100 10 20 30 40

	//删除最前面的元素
	v1.erase(v1.begin());
	PrintVector15(v1);//1000 100 10 20 30 40
	//删除所有元素(清空)
	v1.erase(v1.begin(), v1.end());
	PrintVector15(v1);
	//清空
	v1.clear();
}
int main15()
{
	test15();
	system("pause");
	return 0;
}
