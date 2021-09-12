#include<iostream>
using namespace std;

void FunValue(int no)
{
	cout<<"Inside call by value function\n";
	cout<<"Value of parameter is:"<<no<<"\n";
	no++;
	cout<<"Value after updation : "<<no<<"\n";
}
void FunAddress(int *p)
{
	cout<<"Inside call by address function\n";
	cout<<"Value of parameter is:"<<*p<<"\n";
	(*p)++;
	cout<<"Value after updation : "<<*p<<"\n";
}
void FunReference(int &ref)
{
	cout<<"Inside call by reference function\n";
	cout<<"Value of parameter is:"<<ref<<"\n";
	ref++;
	cout<<"Value after updation : "<<ref<<"\n";
}
int main()
{
    int i = 10, j = 10, k = 10;
    cout<<"Value of i before call : "<<i<<"\n";
    FunValue(i);
    cout<<"Value of i after call : "<<i<<"\n";
    cout<<"Value of j before call : "<<j<<"\n";
    FunAddress(&j);
    cout<<"Value of j after call : "<<j<<"\n";
    cout<<"Value of k before call : "<<k<<"\n";
    FunReference(k);
    cout<<"Value of k after call : "<<k<<"\n";
    return 0;
}
