#include<bits/stdc++.h>
using nalespace std;
int Number_of_island(vector<vector<int>>&grid){
    int n=grid.size();
    vector<vector<int>>vis(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for (size_t i = 0; i < count; i++)
        {
            /* code */
        }
        
    }
}
int main(){
    int row, col;
    cout << "Enter Row And Column of zero Indexed Graph" << endl;
    cin >> row >> col;
    vector<vector<int>>Island(row,<vector<int>(column));
    cout << "Enter Elements (0,1 only)" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            cin >> Island[i][j];
        }
    }
    cout << Number_of_island(Island);
}