#include<iostream>

using namespace std;

class Base
{
public:
    int i,j;
    Base(){i = 10; j = 20;}
    
    void fun(){ cout<<"Base fun\n"; }
    virtual void gun() {cout<<"Base gun\n"; }
    virtual void run() {cout<<"Base run\n"; }
    virtual void mun() {cout<<"Base mun\n"; }
};

class Derived : public Base
{
public:
    int x,y;
    Derived(){x = 50; y = 60;}
    
    void fun() {cout<<"Derived fun\n"; }
    void sun() { cout<<"Derived sun\n"; }
    void gun() {cout<<"Derived gun\n"; }
    virtual void run() {cout<<"Derived run\n"; }
    virtual void bun() {cout<<"Derived bun\n"; }
};

int main()
{
    cout<<"Size of base class is : "<<sizeof(Base)<<"\n";
    cout<<"Size of derived class is : "<<sizeof(Derived)<<"\n";
    
    Base *bp2 = new Derived;    // Upcasting
    
    bp2->fun();
    bp2->gun();
    bp2->sun();
    bp2->mun();
    bp2->run();
    bp2->bun();
    
    return 0;
}
