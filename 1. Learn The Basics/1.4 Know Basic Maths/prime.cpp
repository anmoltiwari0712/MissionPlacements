#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<=1){
		cout<<"Not prime";
	}
	for(int i=2;i<sqrt(n);i++){
		if(n%i==0){
		    cout<<"Not prime";
		}
	}
	cout<<"prime";

}