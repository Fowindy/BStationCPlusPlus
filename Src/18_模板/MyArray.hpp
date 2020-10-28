#pragma once
#include <iostream>
using namespace std;
template<typename T>
class MyArray
{

#pragma region 私有属性定义
private:
	T* pArrayAddress;//指针指向堆区开辟的真实数组的首地址
	int m_Capacity;//数组的容量
	int size;//数组的真实大小  
#pragma endregion

};