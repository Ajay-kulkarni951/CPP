// 4. Write generic program to accept N values from user and return largest values. 

#include<iostream>
using namespace std;

template<class T> 
T Max(T *arr, int iSize) 
{ 
	T max = arr[0];
	int i = 0;
	for(i = 0; i < iSize; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
} 
int main() 
{ 
	int arr[]={10,20,30,40,50}; 
	float brr[] = {10.0,3.7,9.8,8.7}; 

	int iRet = Max(arr,5); 
	printf("%d\n",iRet); // 50 
	float fRet = Max(brr,4); 
	printf("%f\n",fRet); // 10.0
	return 0; 
} 