#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int n=str.size();
    cout<<"String Before Reversing is: "<<endl;
    cout<<str<<endl;
    stack<string> s;
    string result;
    for(int i=0;i<str.size();i++){
        if(str[i]==' '){
            continue;
        }
        string word="";
        while (i<str.size() && str[i]!=' '){
            word=word+str[i];
            i++;
        }
        s.push(word);
    }
  //yaha tak saare words ko stack mein push kar diya
    while(!s.empty()){
        result=result+s.top();
        s.pop();
        result=result+" ";
    }
    cout<<"String after Reversing is: "<<endl;
    cout<<result;
}
