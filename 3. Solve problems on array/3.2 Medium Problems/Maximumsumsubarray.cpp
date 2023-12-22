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
    
    // int maxi=INT_MIN;
    // int sum=0;
    // for(int i=0;i<n;i++){
    //     sum=sum+arr[i];
    //     if(sum>maxi){
    //         maxi=sum;
    //     }
    //     if(sum<0){
    //         sum=0;
    //     }
    // }
    // cout<<maxi;

    // Follow Up Question - Printing the subarray
    int maxi=INT_MIN;
    int sum=0;
    int start=0;
    int ansstart=-1;
    int ansend=-1;
    for(int i=0;i<n;i++){
        if(sum==0){
            start=i;
        }
        sum=sum+arr[i];
        if(sum>maxi){
            maxi=sum;
            ansstart=start;
            ansend=i;
        }
        if(sum<0){
            sum=0;
        }
    }
    cout<<"Maximum Sum Is: "<<maxi<<endl;
    cout << "The subarray is: [";
    for (int i = ansstart; i <= ansend; i++) {
        cout << arr[i] << " ";
    }
    cout << "]n";
}