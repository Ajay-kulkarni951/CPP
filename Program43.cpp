// Input : 4321
/*
4	3	2	1
3	2	1	
2	1
1
*/

#include<iostream>
using namespace std;

class NumberX
{
public:
	int iNo;

	void Accept()
	{
		cout<<"Enter Number\n";
		cin>>iNo;
	}

	void Pattern()
	{
		int iValue = 0, iTemp = 0;
		iValue= iNo;
		while(iValue > 0)
		{
			iTemp = iValue;
			while(iTemp > 0)
			{
				cout<<iTemp % 10<<"\t";
				iTemp = iTemp / 10;
			}
			cout<<"\n";
			iValue = iValue / 10;
		}
	}

};

int main()
{
	int ret = 0;

	NumberX obj;

	obj.Accept();

	obj.Pattern();

	return 0;
}