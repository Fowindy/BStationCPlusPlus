#pragma once
#include <iostream>
using namespace std;
template<typename T>
class MyArray
{
public:
	//有参构造,参数:容量
	MyArray(int capacity)
	{
		cout << "MyArray的有参构造" << endl;
		this->m_Capacity = capacity;
		this->m_size = 0;//开始数组中的元素为0
		//按照用户申请的容量开辟数组空间
		this->pArrayAddress = new T[this->m_Capacity];
	}
	//拷贝构造:防止delete掉申请的堆区内存,那么另一个指针将会变成野指针
	MyArray(const MyArray& arr)
	{
		cout << "MyArray的拷贝构造" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_size = arr.m_size;
		//浅拷贝带来的问题:堆区的内存重复释放
		//this->pArrayAddress = arr.pArrayAddress;

		//深拷贝
		this->pArrayAddress = new T[arr.m_Capacity];
		//深拷贝,如果之前arr数组已经有数据,还需要将数据拷贝过来
		for (int i = 0; i < this->m_size; i++)
		{
			//数组元素的传递
			this->pArrayAddress[i] = arr.pArrayAddress[i];
		}
	}
	//重载operator=,防止浅拷贝问题	a=b=c 如果不做重载b=c返回void,就不能再赋值给a,重载是为了可以延等操作
	MyArray& operator=(const MyArray& arr)
	{
		cout << "MyArray的重载操作符=" << endl;
		//先判断原来堆区是否有数据,如果有先释放
		if (this->pArrayAddress != NULL)
		{
			delete[] this->pArrayAddress;//释放pArrayAddress指针指向的数组数据
			this->pArrayAddress = NULL;//防止野指针
			this->m_Capacity = 0;
			this->m_size = 0;

			//深拷贝
			this->m_Capacity = arr.m_Capacity;
			this->m_size = arr.m_size;
			this->pArrayAddress = new T[arr.m_Capacity];
			for (int i = 0; i < this->m_size; i++)
			{
				this->pArrayAddress[i] = arr.pArrayAddress[i];
			}
			return *this;
		}

	}
	//尾插法
	void Push_Back(const T& val)
	{
		//判断数组容量是否已满
		if (this->m_Capacity == this->m_size)
		{
			cout << "数组容量已满,尾插失败!" << endl;
			return;
		}
		else
		{
			//数组中的最后元素插入尾插元素
			this->pArrayAddress[this->m_size] = val;
			//更新数组的真实大小
			this->m_size++;
		}
	}
	//尾删法
	void Pop_Back(const T& val)
	{
		//首先判断是做真实大小是否为0
		if (this->m_size == 0)
		{
			cout << "数组中没有元素,尾删失败!" << endl;
			return;
		}
		else
		{
			//让用户访问不到最后一个元素,即为尾删
			this->m_size--;
		}
	}
	//因为在堆区开辟空间,所以需要提供析构函数手动释放资源
	~MyArray()
	{
		cout << "MyArray的析构函数" << endl;
		if (this->pArrayAddress != NULL)
		{
			delete[] this->pArrayAddress;//释放pArrayAddress指针指向的数组数据
			this->pArrayAddress = NULL;//防止野指针
		}
	}
#pragma region 私有属性定义
private:
	T* pArrayAddress;//指针指向堆区开辟的真实数组的首地址
	int m_Capacity;//数组的容量
	int m_size;//数组的真实大小  
#pragma endregion

};