#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    // Brute Force Approach
    // set<int> s;
    // for(int i=0;i<n;i++){
    //     s.insert(array[i]);
    // }

    // int k=s.size();
    // int index=0;
    // for(auto& str : s){
    //     array[index]=str;
    //     index++;
    // }

    //Optimal Approach
    int i=0;
    for(int j=1;j<n;j++){
        if(array[i]!=array[j]){
            array[i+1]=array[j];
            i++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<array[i];
    }
    
}
    