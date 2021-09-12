#include<iostream>

//Predefined namespace 
using namespace std;         //It contains cin and cout objects

//Creating user defined namespaces
namespace Marvellous
{
	class Demo
	{
	};
}

namespace Infosystems
{
	class Demo
	{
	};
}

int main()
{
	//Demo obj;  Not Allowed

	using namespace Marvellous;     //1

	Demo obj1;

	Infosystems::Demo obj2;		//2

	return 0;
}