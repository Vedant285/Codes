#include<bits/stdc++.h>
using namespace std;
class upper{
    public:

    int upper_Bound(vector<int>&arr, int target){
        int n=arr.size();
        int low=0,high=n-1,ans=n;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]>target){
                ans=arr[mid];
                high=mid-1;
            }
            else{
                low=mid+1;
                
            }

        }
        return ans;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    upper obj;
    int target;
    cin>>target;
    cout<<obj.upper_Bound(arr,target)<<endl;
}