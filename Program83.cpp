// Accept N numbers from user and  perform addition of that numbers

#include<iostream>
using namespace std;

class Array
{
private:
	int *Arr;
	int iSize;
	
public:
	Array(int);
	~Array();
	void Accept();
	void Display();
	int Addition();
};

Array :: Array(int iNo)
{
	cout<<"Inside Constructor \n";
	iSize = iNo;
	Arr = new int[iSize];
}

Array :: ~Array()
{
	cout<<"Inside Destructor \n";
	delete []Arr;
}

void Array :: Accept()
{
	cout<<"Enter The Elements : \n";
	for(int i = 0; i < iSize; i++)
	{
		cin>>Arr[i];
	}
}

void Array :: Display()
{
	cout<<"Elements of Array Are : \n";
	for(int i = 0; i < iSize; i++)
	{
		cout<<Arr[i]<<"\t";
	}
	cout<<"\n";
}

int Array :: Addition()
{
	int iSum = 0;
	for(int i = 0; i < iSize; i++)
	{
		iSum = iSum + Arr[i];
	}
	return iSum;
}

int main()
{
	int iNo = 0, iRet = 0;
	
	cout<<"Enter the Size of Array : \n";
	cin>>iNo;
	
	//Array *obj = new Array(iNo);		// Call to the constructor
	Array obj(iNo);						// Call to the constructor
	
	obj.Accept();
	obj.Display();
	
	iRet = obj.Addition();
	cout<<"Addition of All Elements Is : "<<iRet<<"\n";
	
	//delete obj;							// Call to the destructor
	
	return 0;
}