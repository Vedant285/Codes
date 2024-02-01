#include <bits/stdc++.h>
using namespace std;
int Fibonacci(int n)
{
    int dp[n] = {0};
    if (n <= 0)
    {
        return dp[n];
    }
    return dp[n] = dp[n - 1] + dp[n - 2];
}
int main()
{
    int n;
    cout << "Enter Fibonacci No. ";
    cin >> n;
    cout << Fibonacci(n);
}