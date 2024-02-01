#include<iostream>
using namespace std;
int main()
{
    int a[5]={0,2,1,2,0},t,c=5, k[5],j=0;
    for (int i = 0; i < 5; i++)
    {
        if(a[i]==0)
        {
            k[j++]=a[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if(a[i]==1)
        {
            k[j++]=a[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if(a[i]==2)
        {
            k[j++]=a[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        
            a[i]=k[i];
        
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<endl;
    }
    
    
}