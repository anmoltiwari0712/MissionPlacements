#include<iostream>
#include<algorithm>
#include<vector>
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
    // Brute Force - O(N^2)
    // vector<int> ans;
    // for(int i=0;i<n;i++){
    //     bool leader=true;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j]>=arr[i]){
    //             leader=false;
    //             break;
    //         }
    //     }
    //     if(leader){
    //         ans.push_back(arr[i]);
    //     }
    // }
    vector<int> ans;
    int maxn=arr[n-1];
    ans.push_back(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        if(arr[i]>maxn){
            ans.push_back(arr[i]);
            maxn=arr[i];
        }
    }
   


    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}