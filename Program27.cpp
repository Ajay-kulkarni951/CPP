#include<iostream>

using namespace std;

class Base
{

};

class Derived : public Base
{

};

int main()
{

Base bobj;
Derived dobj;

cout<<sizeof(bobj)<<"\n"; //1Byte
cout<<sizeof(dobj)<<"\n"; //1Byte

return 0;
}



/*
class Base
{
public:
    int i;
private:
    int j;
protected:
    int k;
};
class Derived : public Base
{
public:
    void fun()
    {
        cout<<i;            //  A
        cout<<j;            //  NA
        cout<<k;            // A
    }
};
int main()
{
    Base bobj;
    Derived dobj;
    cout<<bobj.i<<"\n";     // A
    cout<<bobj.j<<"\n";     // NA
    cout<<bobj.k<<"\n";     // NA
    cout<<dobj.k<<"\n";     // NA
    return 0;
}
*/