#include <iostream>
#include <string>
using namespace std;
//成员属性设置为私有的优点:
//优点1：将所有成员属性设置为私有，可以自己控制读写权限
//优点2：对于写权限，我们可以检测数据的有效性
//设计人类
class Person
{
private:
	//姓名---可读可写
	string m_Name;
	//情人---可写
	string m_Lover;
	//年龄---可读
	int m_Age;
public:
	//设置姓名---可写
	void setName(string name)
	{
		m_Name = name;
	}
	//获取姓名---可读
	string getName()
	{
		return m_Name;
	}
	//获取年龄---可读可写 如果想修改(年龄范围必须是0~150之间)
	int getAge()
	{
		//m_Age = 18;//年龄初始化为18
		return m_Age;
	}
	//设置年龄
	void setAge(int age)
	{
		//优点2：对于写权限，我们可以检测数据的有效性
		if (age<0 || age>150)
		{
			m_Age = 0;
			cout<<"年龄输入有误!"<<endl;
			return;
		}
		m_Age = age;
	}
	//设置情人---可写
	void setLover(string lover)
	{
		m_Lover = lover;
	}
};
int main19()
{
	Person p1;
	p1.setName("张三");
	//设置情人
	p1.setLover("刘亦菲");
	p1.setAge(18);
	cout << "姓名为:" << p1.getName() << endl;
	cout << "年龄为:" << p1.getAge() << endl;
	system("pause");
	return 0;
}
