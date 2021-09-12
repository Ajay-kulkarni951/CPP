#include<iostream>
using namespace std;

class Demo
{
public:
   int i,j;

   Demo()
   {
	cout<<"Inside Demo Constructor\n";
   }

   ~Demo()
   {
	cout<<"Inside Demo Destructor\n";
   }

   int Add(int no1,int no2)
   {
	return no1+no2;
   }

};

// Single Level Inheritance
class Hello : public Demo //Inheritance
{
public: 
  int x,y;

  Hello()
  {
	cout<<"Inside Hello Constructor\n";
  }

  ~Hello()
  {
        cout<<"Inside Hello Destructor\n";
  }

  int Sub(int no1,int no2)
  {
	return no1-no2;
  }

};

//Multilevel Inheritance 
class Maths : public Demo, public Hello
{
public:
  int a;
  Maths()
  {
	cout<<"Inside Maths Constructor\n";
  }

  ~Maths()
  {
        cout<<"Inside Maths Destructor\n";
  }
  
  int Multi(int no1,int no2)
  {
	return no1*no2;
  }
  
};

int main()
{

   /*
    Demo dobj;
    cout<<sizeof(dobj)<<"\n";
    cout<<dobj.Add(10,12)<<"\n";
    */
    
    /*Hello hobj;
    cout<<sizeof(hobj)<<"\n";
    cout<<"Addition is : "<<hobj.Add(10,20)<<"\n";
    cout<<"Substraction is : "<<hobj.Sub(15,5)<<"\n";
    */
    Maths mobj;
    cout<<sizeof(mobj)<<"\n";
  return 0;
}
 