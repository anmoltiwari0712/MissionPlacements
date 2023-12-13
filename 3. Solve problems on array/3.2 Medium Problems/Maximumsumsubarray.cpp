#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Brute Force - O(N*3)
    // int maxi=INT_MIN;
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         int sum=0;
    //         for(int k=i;k<=j;k++){
    //             sum=sum+arr[k];
    //         }
    //         maxi=max(sum,maxi);
    //     }
    // }
    // cout<<maxi;

    // Better Approach - O(N*2)

    // int maxi=INT_MIN;
    // for(int i=0;i<n;i++){
    //     int sum=0;
    //     for(int j=i;j<n;j++){
    //         sum=sum+arr[j];
    //         maxi=max(sum,maxi);

    //     }

    // }
    // cout<<maxi;

    // Optimal Approach - O(N)
    
    int maxi=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum>maxi){
            maxi=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    cout<<maxi;
}