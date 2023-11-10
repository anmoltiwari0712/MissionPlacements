#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num;
    cin>>num;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    for(int i=0;i<n;i++){
        if(num==array[i]){
            cout<<i;
        }
    }
}