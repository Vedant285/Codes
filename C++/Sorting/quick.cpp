#include<bits/stdc++.h>
using namespace std;
int quickl(int arr[],int l,int h)
{
    int pi=arr[h];
    int i=(l-1);
    for(int j=l;j<h;j++)
    {
        if(arr[j]<pi)
        {
            i++;
            int k=arr[i];
            arr[i]=arr[j];
            arr[j]=k;
        }
    }
    int y=arr[i+1];
    arr[i+1]=arr[h];
    arr[h]=y;
    return i+1;
}
void quick(int arr[],int l,int h)
{
    if(l<h)
    {
        int pi=quickl(arr,l,h);
        quick(arr,l,pi-1);
        quick(arr,pi+1,h);
    }
}
int main()
{
    int arr[]={4,2,8,6,9,66,99};
    quick(arr,0,6);
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
}