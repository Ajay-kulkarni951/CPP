#include<iostream>
using namespace std;
//incomplete
class Demo
{
public:
	int i,j;
	Demo(int a,int b)
	{
		i=a;
		j=b;
	}
};

class Hello : public Demo
{
public:
	int x,y;
	Hello(int no1, int no2)
	{
		x = no1;
		y = no2;
	}
};

int main()
{
	Hello hobj(10,20); 
	return 0;
}