#include<iostream>
using namespace std;

int Maximum(int Arr[], int iSize)
{
	int iMax = Arr[0];
	
	for(int i = 0; i < iSize; i++)
	{
		if(iMax < Arr[i])
		{
			iMax = Arr[i];
		}
	}
	return iMax;
}

int main()
{
	int *arr = NULL;
	int iSize = 0, iRet = 0;
	cout<<"Enter Number Of Elements\n";
	cin>>iSize;
	
	arr = new int[iSize];
	
	cout<<"Enter The Values\n";
	for(int i = 0; i < iSize; i++)
	{
		cin>>arr[i];
	}
	
	iRet = Maximum(arr,iSize);
	cout<<"Maximum Number Is : "<<iRet<<"\n";
	
	delete []arr;
	
	return 0;
}