#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int n=str.size();
    cout<<"String Before Replacing is: "<<endl;
    cout<<str<<endl;
    cout<<"String After Replacing is: "<<endl;
    string temp="";
	for(int i=0;i<str.length();i++){
		if(str[i]==' '){
			temp.append("@40");
		}
		else{
			temp.push_back(str[i]);
		}
	}
	cout<<temp;


    
}
