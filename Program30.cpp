#include<iostream>

using namespace std;

class Base
{
public:
	int i,j;

	Base()
	{
		i = 10;
		j = 20;
	}

	void fun()	//definition
	{
		cout<<"Base fun\n";
	}

	void gun()      //definition
	{
		cout<<"Base gun\n";
	}
	
};

class Derived : public Base
{
public:
	int x,y;

	Derived()
	{
		x = 50;
		y = 60;
	}

	void sun()    //definition
	{
		cout<<"Derived sun\n";
	}

	void gun()     //redefinition
	{
		cout<<"Derived gun\n"; 
	}
};

int main()
{   
    Base bobj;
    Derived dobj;
    
    cout<<"Function calls using object\n";
    bobj.fun();     // Base fun
    bobj.gun();     // Base gun
    
    dobj.fun();         // Base fun
    dobj.sun();         // Derived sun
    dobj.gun();         // Derived gun
    dobj.Base::gun();         // Base gun
    
    cout<<"Function calls using pointer and dynamic memory allocation\n";
    Base *bp1 = new Base;
    Derived *dp1 = new Derived;

    bp1->fun();     // Base fun
    bp1->gun();     // Base gun
    
    dp1->fun();         // Base fun
    dp1->sun();         // Derived sun
    dp1->gun();         // Derived gun
    dp1->Base::gun();         // Base gun

    Base *bp2 = new Derived;    // Upcasting
    //Derived *dp2 = new Base;    // Downcasting  NA
    
    // Compiler calls the function of pointer type
    bp2->fun();         // Base fun
    bp2->gun();         // Base gun     (We expect Derived gun) -> virtual
    // bp2->sun();         // Error

	return 0;
}