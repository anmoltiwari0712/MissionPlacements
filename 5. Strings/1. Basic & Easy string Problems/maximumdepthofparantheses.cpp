#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.size();
    int count=0;
    int maxi=0;
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            count++;
            maxi=max(maxi,count);
        }
        if(s[i]==')'){
            count--;
        }
    }
    cout<<maxi;

}
66
((0-9)) (1-3) (((4+5)((0/2)(5-1)(5/9))(9-0)((4/3)(2+7))(3-6)(((6+2)))))
