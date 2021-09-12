#include<iostream>
using namespace std;
class Demo
{
public:            // Any one can access from anywhere
    int i;
    void fun() { cout<<"Inside public fun\n"; }
    
private:        // No one can access outside the class                                                    //Abstraction 100%
    int j;
    void gun() { cout<<"Inside private gun\n"; }
    
protected:    // No one can access outside the class except immediate derived class// Abstraction Not 100%
    int k;
    void sun() { cout<<"Inside protected sun\n"; }
};

int main()
{
    Demo obj;
    cout<<sizeof(obj);      // 12 BYTE
    obj.fun();                   // Allowed
    cout<<obj.i;               // Allowed
    obj.gun();                  // Not Allowed
    cout<<obj.j;              // Not Allowed
    obj.sun();                  // Not allowed
    cout<<obj.k;             // Not allowed
    return 0;
}
