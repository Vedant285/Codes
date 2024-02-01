#include<iostream>
using namespace std;
int main()
{
    int arr[4]={1,5,3,2},t;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i]>arr[i+1])
        {
            t=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=t;
        }
        
    }
    for (int i = 0; i < 4; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    
}