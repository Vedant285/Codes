#include <bits/stdc++.h>
using namespace std;
class Floor_and_Ceil
{
public:
    pair<int,int>FaC(vector<int>&arr,int target){
        int n=arr.size();
        int low=0,high=n-1,floor=n;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]>target){
                floor=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
                
            }

        }
        low=0,high=n-1;
        int Ceil=n;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]>=target){
                Ceil=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return {floor,Ceil};
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin>>target;
    cout << "Floor and Ceil are " << endl;
    Floor_and_Ceil obj;
    pair<int,int>ans=obj.FaC(arr,target);
    cout<<ans.first<<" "<<ans.second;
}