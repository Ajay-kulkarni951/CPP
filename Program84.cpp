#include<iostream>
using namespace std;

class Stack
{
private:
	int *Arr;
	int iSize;
	int Top;
	
public:
	Stack(int);
	~Stack();
	void Push(int);
	int Pop();
	void Display();
};

Stack :: Stack(int iNo);
{
	iSize = iNo;
	top = -1;
	Arr = new int[iSize];
}

Stack :: ~Stack();
{
	delete []Arr;
}

void Stack :: Push(int iNo)
{
	if(iTop == iSize - 1)
	{
		cout<<"Stack Is Full \n";
	}
	else
	{
		iTop++;
		Arr[iTop] = iNo;
	}
}

int Stack :: Pop()
{
	if(iTop == -1)
	{
		cout<<"Stack Is Empty \n";
		return -1;
	}
	else
	{
		iNo = Arr[iTop];
		iTop--;
		return iNo;
	}
}

void Stack :: Display()
{
	if(iTop == -1)
	{
		cout<<"Stack Is Empty \n";
	}
	else
	{
		for(int i = 0; i < iTop; i++)
		{
			cout<<Arr[i]<<"\t";
		}
		cout<<"\n";
	}
}


int main()
{
	int iNo = 0, iRet = 0;
	
	cout<<"Enter Size of Array : \n";
	cin>>iNo;
	
	Stack obj(iNo);
	
	obj.Push();
	
	obj.Display();
	
	iRet = obj.Pop();
	cout<<"Poped Element Is : "<<iRet<<"\n";
	
	return 0;;
}