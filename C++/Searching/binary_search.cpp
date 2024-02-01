#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter element you want to search ";
    int k;
    cin >> k;
    int s = 0, e = n - 1;
    while (s < e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == k)
        {
            cout << " element found at index " << i << endl;
            return 0;
        }
        else if (arr[mid] > k)
            mid = s;
        else
            mid = e;
    }
    cout << "Not found";
}