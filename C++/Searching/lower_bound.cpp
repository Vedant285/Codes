#include<bits/stdc++.h>
using namespace std;

class lowerBound{
    public:
     
    void lower(vector<int>& arr,int target){
        int n=arr.size();
        int low=0,high=n-1,ans=n;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]>=target){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        cout<<ans<<endl;
    }

};
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    lowerBound obj;
    obj.lower(arr,target);
}