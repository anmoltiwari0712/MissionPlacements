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
    // Brute Force Approach - T.C O(n)
    for(int i=0;i<n;i++){
        if((i==0 || arr[i-1]<arr[i]) && (i==n-1 || arr[i]>arr[i+1])){
            return i;
        }
    }
    // Optimal Approach - T.C - O(logn)
    if (n == 1) return 0;
    if (arr[0] > arr[1]) return 0;
    if (arr[n - 1] > arr[n - 2]) return n - 1;
    int low=1;
    int high=n- 2;
    while(low<=high){
        int mid=(high+low)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
            return mid;
        }
        if(arr[mid-1]<arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
}