#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// very basic approach
int main(){
    int n;
    cin>>n;
    while(n>0){
        int lastdigit=n%10;
        n=n/10;
        if(lastdigit!=0){
            cout<<lastdigit;
        }
    }
    // cout<<count;
}