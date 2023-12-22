#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    int k;
    cin>>k;
    int count=0;

    // Brute Force - O(N^3)
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         int sum=0;
    //         for(int k=i;k<=j;k++){
    //             sum=sum+arr[k];
    //         }
    //         if(sum==k){
    //             count++;
    //         }
    //     }
    // }
    // cout<<count;

    // Better Approach- O(N^2)
    // for(int i=0;i<n;i++){
    //     int sum=0;
    //     for(int j=i;j<n;j++){
    //         sum=sum+arr[j];
    //         if(sum==k){
    //             count++;
    //         }
    //     }
    // }
    // cout<<count;

    // Optimal Approach - O(N)
    int count=0;
    int presum=0;
    unordered_map<int,int> mpp;
    mpp[0]=1;
    for(int i=0;i<n;i++){
        presum=presum+arr[i];
        int remove=presum-k;
        count=count+mpp[remove];
        mpp[presum]=mpp[presum]+1;
    }

}