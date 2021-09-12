#include<iostream>
using namespace std;

void Swapi(int &no1, int &no2)
{
	int temp;
	temp = no1;
	no1 = no2;
	no2 = temp;
}

void Swapc(char &no1, char &no2)
{
	char temp;
	temp = no1;
	no1 = no2;
	no2 = temp;
}

template<class T>			// Template Header
void Swap(T &no1, T &no2)
{
	T temp;
	temp = no1;
	no1 = no2;
	no2 = temp;
}

int main()
{
	int i = 10, j = 20;
	char ch1 = 'A', ch2 = 'B';
	
	cout<<"value of i and j before swap :"<<i<<" "<<j<<"\n";
	Swapi(i,j);
	cout<<"Value of i and j after swap : "<<i<<" "<<j<<"\n";
	
	cout<<"value of ch1 and ch2 before swap :"<<ch1<<" "<<ch2<<"\n";
	Swapc(ch1,ch2);
	cout<<"Value of ch1 and ch2 after swap : "<<ch1<<" "<<ch2<<"\n";
	
	
	
	
	i = 10;
	j = 20;
	ch1 = 'A';
	ch2 = 'B';
	cout<<"value of i and j before swap :"<<i<<" "<<j<<"\n";
	Swap(i,j);
	cout<<"Value of i and j after swap : "<<i<<" "<<j<<"\n";
	
	cout<<"value of ch1 and ch2 before swap :"<<ch1<<" "<<ch2<<"\n";
	Swap(ch1,ch2);
	cout<<"Value of ch1 and ch2 after swap : "<<ch1<<" "<<ch2<<"\n";
	
	return 0;
}