// 5. Write generic program to accept N values and reverse the contents. 
// Input : 10 20 30 10 30 40 10 40 10 
// Output : 10 40 10 40 30 10 30 20 10 

#include<iostream>
using namespace std;

template<class T> 
void Reverse(T *arr, int iSize) 
{ 
	T iStart = 0, iEnd = 0;

	for(iStart = 0, iEnd = iSize - 1; iStart < iEnd; iStart++,iEnd--)
	{
		T temp = arr[iStart];
		arr[iStart] = arr[iEnd];
		arr[iEnd] = temp;
	}

} 
int main() 
{ 
	int arr[]={10,20,30,10,30,40,10,40,10}; 
	for(int i=0;i<9;i++) 
	{ 
		cout<<arr[i]<<"\t"; // 10 20 30 10 30 40 10 40 10 
	} 
	cout<<"\n";
	Reverse(arr,9); 

	for(int i=0;i<9;i++) 
	{ 
		cout<<arr[i]<<"\t"; // 10 40 10 40 30 10 30 20 10 
	} 
	cout<<"\n";
	return 0; 
}