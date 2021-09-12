#include<iostream>
using namespace std;

template <class T>
void SwapX(T &iNo1, T &iNo2)			
{
	T temp;
	temp = iNo1;
	iNo1 = iNo2;
	iNo2 = temp;
}

int main()
{
	char iValue1, iValue2;
	
	cout<<"Enter First Character\n";
	cin>>iValue1;
	
	cout<<"Enter Second Character\n";
	cin>>iValue2;
	
	SwapX(iValue1,iValue2);				
	cout<<"After Swap Value1 is : "<<iValue1<<"\n";
	cout<<"After Swap Value2 is : "<<iValue2<<"\n";
	
	return 0;
}