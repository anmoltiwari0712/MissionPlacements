#include<iostream>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the number to search: "<<endl;
    cin>>key;
    // Brute Force Approach Approach T.C - O(N)
    for(int i=0;i<n;i++){
        if(arr[i]>=key){
            cout<<i;
        }
    }
    // Optimal Approach T.C - O(log N)
    int start=0;
    int end=n-1;
    int ans=n;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]>=key){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
}