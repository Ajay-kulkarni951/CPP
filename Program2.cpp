#include<iostream>

using namespace std;

class Base
{
public:
    int i;

private:
    int j;

protected:
    int k;
};

class Derived1 : protected Base
{
    int l;
};

class Derived2 : public Derived1
{
    int y;
    int r;
};

int main()
{
    Base bobj;
    Derived1 dobj1;
    Derived2 dobj2;

    cout<<sizeof(bobj)<<"\n";
    cout<<sizeof(dobj1)<<"\n";
    cout<<sizeof(dobj2)<<"\n";

    return 0;
}
