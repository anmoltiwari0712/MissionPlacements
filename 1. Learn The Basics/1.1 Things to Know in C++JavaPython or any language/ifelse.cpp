#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<"greater";
    }
    else if(a==b){
        cout<<"equal";
    }
    else{
        cout<<"smaller";
    }
}