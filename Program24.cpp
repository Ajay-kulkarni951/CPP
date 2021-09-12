#include<iostream>
using namespace std;

namespace   // Unnamed namesapce/ anonymous namespace
{
	class Demo
	{
	public:
		void fun()
		{
			cout<<"Inside fun\n";
		}
	};
}

int main()
{
	Demo obj;
	obj.fun();
	return 0;
}