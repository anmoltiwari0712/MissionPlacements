#include<iostream>
#include<string>
using namespace std;
string printname(int n){
    string value="Coding Ninjas";
    if(n==0){
        return "";
    }
    cout<<value<<endl;
    printname(n-1);
}
int main(){
    int n;
    cin>>n;
    printname(n);
}