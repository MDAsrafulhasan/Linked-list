#include<bits/stdc++.h>
using namespace std;
void fun(int *&p)
{
    // *p=20;
    // p=NULL;
    cout<<&p<<endl;
}
int main()
{
    int a=10;
    int *ptr=&a;
    fun(ptr);
    cout<<&ptr<<endl;
    return 0;
}