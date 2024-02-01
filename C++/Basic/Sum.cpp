#include "bits/stdc++.h"
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 7, 5};
    int a = 12, l = 0, m, ar[l];
    // cin >> a;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            for (int h = i; h <= j; h++)
            {
                ar[l] = arr[h];
                l++;
            }
        }
    }
    for (int i = 0; i < l; i++)
    {
        cout << ar[i];
    }

    // out_of_loop:
    // cout << m << l << endl;
}