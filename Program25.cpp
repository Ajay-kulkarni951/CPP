#include<iostream>
using namespace std;

int main()
{
    int *p = NULL;
    int *q = NULL;
    int *r = NULL;
    
    // p = (int *)malloc(sizeof(int) * 5);
    p = new int[5];
    
    // free(p);
    delete []p;
    
    // q = (int *)malloc(sizeof(int) * 1);
    q = new int;
    
    // r = (int *)malloc(sizeof(int) * 1);
    // *r = 11;
    r = new int(11);
    // free(q);
    delete q;
    // free(r);
    delete r;
    
    return 0;
}
