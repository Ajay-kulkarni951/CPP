#include<iostream>
using namespace std;
//Single Inheritance

class Demo
{
public:
	int i,j;
	Demo(int a,int b) //line 10
	{
		i=a;
		j=b;
	}
};

class Hello : public Demo  //line 17
{
public:
	int x,y;
	Hello(int no1, int no2) : Demo(no1,no2)  //line 21
	{
		x = no1;
		y = no2;
	}
};

int main()
{
	Hello hobj(10,20);  // 30 -> 17 -> 21 -> 10 ->21 -> 30 ( // line 30 ,line controls flow)

	return 0;
}