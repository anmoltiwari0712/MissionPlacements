#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int n=str.size();
    string part;
    getline(cin,part);
    while(n!=0 && str.find(part)<n){
        str.erase(str.find(part),part.length());
    }   
    cout<<str;




}