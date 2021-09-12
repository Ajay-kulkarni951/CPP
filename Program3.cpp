#include<iostream>

using namespace std;

class Demo
{
public:
    int i;
    int j;
    const int k = 30;       // Constant charcteristics
    
    Demo()
    {
        i = 10;
        j = 20;
        // k = 30;      // Error
    }
    // Non constant behaviour
    void fun()
    {
        i++;
        j++;
        // k++;         // Not allowed as k is constant
    }
    // constant behaviour
    void gun() const
    {
       // i++;          // We can not change the characteristics inside constant function
       //  j++;         // We cannot change the characteritics inside constant function
       // k++;        // Not allowed as k is constant
    }
};

int main()
{
    // Non constant object
    Demo obj1;
    cout<<obj1.k<<"\n";
    // obj.k++;     // Not allowed
    obj1.fun();     // Non constant object can call non constatnt function
    obj1.gun();     // Non constant object can call constant function
    
    // Constant object
    const Demo obj2;
    obj2.i++;        //NA
    obj2.j++;        //NA
    obj2.k++;        //NA
    obj2.fun();     // Constant object can not call non constant function
    obj2.gun();     // Constatnt object can call constant function
    
    return 0;
}

