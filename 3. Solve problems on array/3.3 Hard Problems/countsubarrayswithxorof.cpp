#include<algorithm>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<limits.h>
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
    int b;
    cin>>b;

    // Brute Force Approach T.C - O(N^3)
    // int count=0;
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         int xorr=0;
    //         for(int k=i;k<=j;k++){
    //             xorr=xorr^arr[k];
    //         }
    //         if(xorr==b){
    //             count++;
    //         }
    //     }
    // }
    // cout<<"Count is: "<<count<<endl;


    // Better Approach T.C - O(N^2)
    // int count=0;
    // for(int i=0;i<n;i++){
    //     int xorr=0;
    //     for(int j=i;j<n;j++){
    //         xorr=xorr^arr[j];
    //         if(xorr==b){
    //             count++;
    //         }
    //     }
    // }
    // cout<<"Count is: "<<count<<endl;

    // Optimal Approach T.C - O(N * LOG N)

    int count=0;
    int xorr=0;
    map<int,int> mpp;
    mpp[0]=1;
    for(int i=0;i<n;i++){
        xorr=xorr^arr[i];
        int x= xorr^ k;
        count=count+mpp[x];
        mpp[xorr]=mpp[xorr]+1;
    }
}