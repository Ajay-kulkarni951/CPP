include<iostream>

using namespace std;

class Hello
{
public:
    // Member function of class Hello
    void fun();
    void gun();
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
    // Hello is friend of our class.
    friend class Hello;
};

void Hello::fun()
{
    Demo obj;
    cout<<obj.i<<"\n";  // Allowed
    cout<<obj.j<<"\n";  // Not allowed  : Private (if not friend)
    cout<<obj.k<<"\n";  // Not allowed  : Protected (if not friend)
}
void Hello::gun()
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
    hobj.gun();
    return 0;
}
