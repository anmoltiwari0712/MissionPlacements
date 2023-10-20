#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
	int temp=n;
	int count=log10(n)+1;
	while(n>0){
		int lastdigit=n%10;
		ans=ans+pow(lastdigit,count);
		n=n/10;

	}
	if(temp==ans){
		cout<<"Armstrong";
	}
	else{
		cout<<"Not an armstrong";
	}
}