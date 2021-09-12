include<iostream>

using namespace std;
//Multiple Inheritance
class Demo
{
public:
    int i;
    Demo(int x)
    { i = x;
        cout<<"Inside Demo\n";
    }
};
class Hello
{
public:
    int x;
    Hello(int no1)
    {x = no1;
        cout<<"Inside HEllo\n";
    }
};
class ABC : public Demo, public Hello
{
public:
    int a;
    ABC() : Hello(11),Demo(21)
    {a =101;
        cout<<"Inside ABC\n";
    }
};
int main()
{
    ABC obj;
    cout<<obj.i<<"\t"<<obj.x<<"\t"<<obj.a<<"\n";
    return 0;
}
