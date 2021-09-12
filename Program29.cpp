#include<iostream>
using namespace std;
void fun(int n0)
{
    cout<<"Inside fun\n";
}

int main()
{
    // gun is the reference which referes to the function fun which accepts nothing and return nothing.
    void (&gun)(int) = fun;
    
    fun(11);
    gun(11);
    
    return 0;
}
