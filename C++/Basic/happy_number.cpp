#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=19,k=0;
    while(a>1)
    {
        while(a!=0)
        {
            
        int l =a%10;
        k=k+(l*l);
        a/=a;
        }
    }
    cout<<k<<endl;

}
