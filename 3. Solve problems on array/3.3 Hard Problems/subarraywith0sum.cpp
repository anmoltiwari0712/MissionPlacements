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
    // Brute Force Approach - T.C 
    // int maxlen=0;
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         int cursum=0;
    //         for(int k=i;k<=j;k++){
    //             cursum=cursum+arr[k];
    //         }
    //         if(cursum==0){
    //             if(maxlen<=j-i+1){
    //                 maxlen=j-i+1;
    //             }
    //         }
    //     }
    // }
    // cout<<"Max length subarray with zero sum is: "<<maxlen;
    int maxlen=0;
    for(int i=0;i<n;i++){
        int cursum=0;
        for(int j=i;j<n;j++){
            cursum=cursum+arr[j];
            if(cursum==0){
                if(maxlen<=j-i+1){
                    maxlen=j-i+1;
                }
            }
        }
    }
    cout<<"Max length subarray with zero sum is: "<<maxlen;

    
}