#include<iostream>
#include<limits.h>
#include<algorithm>

using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Brute Force - O(N*2)
    // int maxsum=0;
    // int sum=0;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         sum=arr[j]-arr[i];
    //         maxsum=max(sum,maxsum);
    //     }
    // }
    // cout<<maxsum;

    // Optimal Approach - O(N)
    int masum=0;
    int misum=INT_MAX;
    for(int i=0;i<n;i++){
        misum=min(misum,arr[i]);
        masum=max(masum,arr[i]-misum);
    }
    cout<<masum;
}