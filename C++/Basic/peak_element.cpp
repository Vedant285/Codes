#include "bits/stdc++.h"
using namespace std;
int main()
{
    int k, max = 0,arr[5]={1,3,2,9,6};

    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "Index of peak element is " << max << endl;
}
