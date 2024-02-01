#include"bits/stdc++.h"
using namespace std;
int main()
{
    int a[6]={1,1,1,1,1,4},k=1,l=0;
    for (int i = 0; i < 6; i++)
    {
        if (a[i]==k)
        {
            l++;
        }
        
    }
    cout<<l<<endl;
    

}