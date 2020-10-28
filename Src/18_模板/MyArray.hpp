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
		this->m_Capacity = capacity;
		this->size = 0;//开始数组中的元素为0
		//按照用户申请的容量开辟数组空间
		this->pArrayAddress = new T[this->m_Capacity];
	}
#pragma region 私有属性定义
private:
	T* pArrayAddress;//指针指向堆区开辟的真实数组的首地址
	int m_Capacity;//数组的容量
	int size;//数组的真实大小  
#pragma endregion

};