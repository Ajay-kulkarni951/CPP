#include<iostream>
using namespace std;

void Swap(int &iNo1, int &iNo2)			// Call by reference
{
	int temp;
	temp = iNo1;
	iNo1 = iNo2;
	iNo2 = temp;
}

int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	cout<<"Enter First Number\n";
	cin>>iValue1;
	
	cout<<"Enter Second Number\n";
	cin>>iValue2;
	
	Swap(iValue1,iValue2);				// Swap(iValue1,iValue2);
	cout<<"After Swap Value1 is : "<<iValue1<<"\n";
	cout<<"After Swap Value2 is : "<<iValue2<<"\n";
	
	return 0;
}