#include<iostream>

using namespace std;

class Hello
{
public:
    // Member function of class Hello
    void fun();
};

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
    // fun is the function which accepts nothing returns nothing and that function is the member function of hello class. is friend of our class.
    friend void Hello::fun();
};

void Hello::fun()
{
    Demo obj;
    cout<<obj.i<<"\n";  // Allowed
    cout<<obj.j<<"\n";  // Not allowed  : Private (if not friend)
    cout<<obj.k<<"\n";  // Not allowed  : Protected (if not friend)
}

int main()
{
    Hello hobj;
    hobj.fun();
    return 0;
}
