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
// Better Approach
    // int smax=INT_MIN;
    // int smin=INT_MAX;
    // for(int i=0;i<n;i++){
    //     fmax=max(fmax,array[i]);
    //     fmin=min(fmin,array[i]);
    // }
    
    // for(int i=0;i<n;i++){
    //     if(array[i]>smax && array[i]!=fmax){
    //         smax=array[i];
    //     }
    //     if(array[i]<smin && array[i]!=fmin){
    //         smin=array[i];
    //     }
    // }
    // cout<<"second Max is: "<<smax<<endl;
    // cout<<"second Min is: "<<smin<<endl;

// Optimal Approach
    int fmax=INT_MIN;
    int fmin=INT_MAX;
    int smax=INT_MIN;
    int smin=INT_MAX;
    for(int i=0;i<n;i++){
        if(array[i]>fmax){
            smax=fmax;
            fmax=array[i];
        }
        else if(array[i]>smax){
            smax=array[i];
        }
    }
    for(int i=0;i<n;i++){
        if(array[i]<fmin){
            smin=fmin;
            fmin=array[i];
        }
        else if(array[i]<smin){
            smin=array[i];
        }
    }
    cout<<"second Max is: "<<smax<<endl;
    cout<<"second Min is: "<<smin<<endl;
}