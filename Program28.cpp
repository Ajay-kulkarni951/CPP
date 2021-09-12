#include<iostream>
using namespace std;

int main()
{
  int no=11;
  int &iref; //error
  iref=no;   //error
  return 0;
}

/*#include<iostream>
using namespace std;

int main()
{
    // no is a variable of type integer initialised with the value 11.
    int no = 11;
    
    // iref is the refrence of type integer which referes to no.
    int &iref = no;
        
    // i is a variable of type integer initialised with the value 21.
    int i = 21;
    
    // p is a pointer which holds address of integer currently it holds address of i.
    int *p = &i;

    // pref is the reference which referce to the pointer p.
    int *(&pref) = p;
    
    cout<<*pref;            // 21
    cout<<pref;             // 300
    cout<<&pref;           // 400
    cout<<sizeof(pref);    // 8
    return 0;
}
*/