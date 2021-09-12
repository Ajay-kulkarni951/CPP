#include<iostream>

using namespace std;

class Demo
{
public:
    int i;
private:
    int j;
protected:
    int k;
public:
    Demo()
    {i = 10; j = 20; k = 30;}
friend void fun();  // fun is a function which accepts nothing and returns nothing which is the friend of our class
};

// Naked function (function efined outside the class)
void fun()
{
    Demo obj;
    cout<<obj.i<<"\n";  // Allowed
    cout<<obj.j<<"\n";  // Not allowed  : Private
    cout<<obj.k<<"\n";  // Not allowed  : Protected
}
int main()
{
    fun();
    return 0;
}
