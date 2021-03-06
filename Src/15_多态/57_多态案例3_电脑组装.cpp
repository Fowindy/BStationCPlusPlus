﻿#include <iostream>
#include <string>
using namespace std;
//57_多态案例3_电脑组装.cpp
//抽象出每个零件类
//CPU类
class CPU
{
public:
	//抽象计算函数
	virtual void calculate() = 0;
};
//显卡类
class VideoCard
{
public:
	//抽象显示函数
	virtual void display() = 0;
};
//内存条类
class Memory
{
public:
	//抽象存储函数
	virtual void storage() = 0;
};
//电脑类继承上面三个类
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* videoCard, Memory* memory)
	{
		m_cpu = cpu;
		m_memory = memory;
		m_videoCard = videoCard;
	}
	//提供工作函数
	void work()
	{
#pragma region 让零件工作起来,调用接口
		m_cpu->calculate();
		m_videoCard->display();
		m_memory->storage();
#pragma endregion

	}
	//1.<<方案2:在电脑类的析构函数中释放零件指针
	~Computer()
	{
		cout << "CPU释放,显卡释放,内存释放" << endl;
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_videoCard != NULL)
		{
			delete m_videoCard;
			m_videoCard = NULL;
		}
		if (m_memory != NULL)
		{
			delete m_memory;
			m_memory = NULL;
		}
	}
private:
#pragma region 定义私有零件的指针变量
	CPU* m_cpu;//CPU的零件指针
	VideoCard* m_videoCard;//VideoCard的零件指针
	Memory* m_memory;//Memory的零件指针
#pragma endregion
};
//零件具体厂商
//Intel厂商
class IntelCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Intel的CPU开始运算了！" << endl;
	}
};
class IntelVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Intel的显卡开始显示了！" << endl;
	}
};
class IntelMemory : public Memory
{
public:
	virtual void storage()
	{
		cout << "Intel的内存条开始存储了！" << endl;
	}
};
//Lenovo厂商
class LenovoCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Lenovo的CPU开始运算了！" << endl;
	}
};
class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo的显卡开始显示了！" << endl;
	}
};
class LenovoMemory : public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo的内存条开始存储了！" << endl;
	}
};
void test57()
{
	//第一台电脑的零件
	CPU* cpu1 = new IntelCPU;
	VideoCard* videoCard1 = new IntelVideoCard;
	Memory* memory1 = new IntelMemory;
	cout << "------------------第一台电脑----------------" << endl;
	//创建第一台电脑
	Computer* computer1 = new Computer(cpu1, videoCard1, memory1);
	//第一台电脑开始工作
	computer1->work();
	//1.<<方案1:直接释放
	//delete cpu1;
	//delete videoCard1;
	//delete memory1;
	//工作完成释放资源
	delete computer1;
	//1.?电脑所有的零件资源怎么释放
	cout << "------------------第二台电脑----------------" << endl;
	//创建第二台电脑
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	//第二台电脑开始工作
	computer2->work();
	//工作完成释放资源
	delete computer2;

	cout << "------------------第三台电脑----------------" << endl;
	//创建第二台电脑
	Computer* computer3 = new Computer(new IntelCPU, new IntelVideoCard, new LenovoMemory);
	//第二台电脑开始工作
	computer3->work();
	//工作完成释放资源
	delete computer3;
}
int main()
{
	test57();
	system("pause");
	return 0;
}
