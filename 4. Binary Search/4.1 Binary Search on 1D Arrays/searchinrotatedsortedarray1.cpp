#include<iostream>
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
    int k;
    cin>>k;
    // Brute Force approach
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;
        }
    }
    // Optimal Approach T.C - O(logn)
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[low]<=arr[mid]){
            if(arr[low]<=k && k<=arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(arr[mid]<=k && k<=arr[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
}