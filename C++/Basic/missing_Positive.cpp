#include<bits/stdc++.h>
using namespace std;
int count()
{
    int arr[]={3,2,5,6,-1};
    int k=sizeof(arr)/sizeof(arr[0]);
    int x=1;
    for (int i=0;i<k;++i)
    {
        if(arr[i]>0)
        {
            if(arr[i]!=x)
            {
                return x;
            }
            x++;
        }   
    }
    return x;
}
int main()
{
    int k=count();
    cout<<k<<endl;
}