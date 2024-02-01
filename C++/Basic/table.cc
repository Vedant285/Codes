#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    cout << "the table is \n";
    for (int i = 1; i <= 10 ; i++)
    {
        cout << a << "x" << i << "=" << i*a << "\n";
    }

    return 0;
}
