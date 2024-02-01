#include <bits/stdc++.h>
using namespace std;
class Knapsack
{
public:
    int knapsack(vector<int> &wt, vector<int> &val, int n, int w)
    {
        vector<vector<int>> dp(n, vector<int>(w + 1, 0));
        for (int i = wt[0]; i <= w; i++)
        {
            dp[0][i] = val[0];
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j <= w; j++)
            {
                int notTake = 0 + dp[i - 1][j];
                int take = INT_MIN;
                if (wt[i] <= j)
                {
                    take = val[i] + dp[i - 1][j - wt[i]];
                }
                dp[i][j] = max(take, notTake);
            }
        }
        return dp[n - 1][w];
    }
};
int main()
{
    vector<int> wt = {1, 2, 4, 5};
    vector<int> val = {5, 4, 8, 6};
    int w = 5;
    int n = val.size();
    Knapsack obj;
    cout << obj.knapsack(wt, val, n, w);
}