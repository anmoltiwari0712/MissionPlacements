#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// very basic approach
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n>0){
        int lastdigit=n%10;
        n=n/10;
        count++;
    }
    cout<<count;
}

// Second Approach

// int main(){
//     int n;
//     cin>>n;
//     int count=(int)(log10(n)+1);
//     cout<<count;
// }