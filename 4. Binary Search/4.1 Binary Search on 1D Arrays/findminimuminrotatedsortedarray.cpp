#include<iostream>
#include<limits.h>
using namespace std;
#include<vector>
int main(){
    int n; 
    cin>>n;
    vector<int> arr;
    int ele;
    for(int i=0;i<n;i++){
        cin>>ele;
        arr.push_back(ele);
    }
    // Brute Force Approach - T.C - O(N)
    // int ans=INT_MAX;
    // for(int i=0;i<n;i++){
    //     ans=min(ans,arr[i]);
    // }
    // cout<<ans;

    // Optimal Approach - T.C - O(log n)
    int low=0;
    int high=n-1;
    int ans=INT_MAX;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[low]<=arr[mid]){ //matlab left part of the array sorted hai
            ans=min(ans,arr[low]);
            low=mid+1;
        }
        else{
            ans=min(ans,arr[mid]);
            high=mid-1;
        }
    }
    cout<<"Minimum Element is: "<<ans<<endl;
}
