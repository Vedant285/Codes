#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;
void subsequence(int ind,int n,vector<int>&arr,vector<int>&temp){
    if(ind==n){
        ans.push_back(temp);
        return ;
    }
    temp.push_back(arr[ind]);
    subsequence(ind+1,n,arr,temp);
    temp.pop_back();
    subsequence(ind+1,n,arr,temp);
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>temp;
    subsequence(0,n,arr,temp);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}