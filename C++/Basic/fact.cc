#include<iostream>
using namespace std;
int main()
{
    int a,f=1;
    cout<<"Enter No. whose factorial you want : ";
    cin>>a;
    for (int i = 1; i <= a; i++)
    {
        f=f*i;
    }
    cout<<"factorial of given no. is :"<<f;
    
}
