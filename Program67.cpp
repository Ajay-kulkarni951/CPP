//2. Write generic program to find largest number from three numbers. 

#include<iostream>
using namespace std;

template<class T> 
T Max(T iNo1, T iNo2, T iNo3) 
{ 
	if((iNo1 > iNo2) && (iNo1 > iNo3))
	{
		return iNo1;
	}
	else if(iNo2 > iNo3)
	{
		return iNo2;
	}
	else
	{
		return iNo3;
	} 
}

int main() 
{ 
 int iRet = Max(10,20,30); 
 printf("%d\n",iRet); 
 float fRet = Max(10.0f,20.0f,30.0f); 
 printf("%f\n",fRet); 
 return 0; 
} 