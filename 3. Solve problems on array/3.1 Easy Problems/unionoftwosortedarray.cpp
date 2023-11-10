#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    // Optimal Approach
    int n;
    cout<<"Enter The no of elements n: "<<endl;
    cin>>n;
    int arr1[n];
    cout<<"Enter elements in n: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cout<<"Enter The no of elements m: "<<endl;
    cin>>m;
    int arr2[m];
    cout<<"Enter elements in m: "<<endl;
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int i=0;
    int j=0;
    vector<int> Union;
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            if(Union.size() == 0 || Union.back()!=arr1[i]){
                Union.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(Union.size() == 0 || Union.back()!=arr2[j]){
                Union.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<n){
        if(Union.back()!=arr1[i]){
            Union.push_back(arr1[i]);
        }
        i++;
    }
    while(j<m){
        if(Union.back()!=arr2[j]){
            Union.push_back(arr2[j]);
        }
        j++;
    }
    for(int i=0;i<Union.size();i++){
        cout<<Union[i]<<" ";
    }
// Brute Force Approach
    // set<int> ans;
    // vector<int> temp;
    // for(int i=0;i<a.size();i++){
    //     ans.insert(a[i]);
    // }
    // for(int i=0;i<b.size();i++){
    //     ans.insert(b[i]);
    // }
    // for(auto& i : ans){
    //     temp.push_back(i);
        
    // }
    // return temp;


}