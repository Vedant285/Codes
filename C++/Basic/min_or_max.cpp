#include"bits/stdc++.h"
using namespace std;
int main()
{
    int arr[5]={1,345,234,21,56789};
    int min=arr[0],max=arr[0];
    for (int i =1 ; i < 5; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
        if (min>arr[i])
        {
            min=arr[i];
        }
        
        
    }
    cout<<max<<"\t"<<min;
    
}