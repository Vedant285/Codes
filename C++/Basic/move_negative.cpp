#include "bits/stdc++.h"
using namespace std;
int main()
{
    int c;
    cout << "Enter No. of elements: ";
    cin >> c;
    int arr[c], l, g;
    for (int i = 0; i < c; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (arr[i] > 0)
            {
                continue;
            }
            else
            {
                if (arr[i] < 0 && arr[j] > 0)
                {
                    l = arr[j];
                    arr[j] = arr[i];
                    arr[i] = l;
                }
            }
        }
    }
    cout << "Array after moving negative" << endl;
    for (int i = 0; i < c; i++)
    {
        cout << arr[i] << endl;
    }
}