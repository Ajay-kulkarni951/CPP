#include<iostream>
using namespace std;

template <class T>
T Max(T iNo1, T iNo2)
{
	if(iNo1 > iNo2)
	{
		return iNo1;
	}
	else
	{
		return iNo2;
	}
}

int main()
{
	int iValue1, iValue2, iRet = 0;
	
	cout<<"Enter First Value\n";
	cin>>iValue1;
	
	cout<<"Enter Second Value\n";
	cin>>iValue2;
	
	iRet = Max(iValue1,iValue2);				
	cout<<"Maximum Value is : "<<iRet<<"\n";
	
	
	return 0;
}