#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {7, 10, 4, 3, 20, 15}, t, l = 3;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (arr[i] < arr[j])
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    cout << arr[2];
}