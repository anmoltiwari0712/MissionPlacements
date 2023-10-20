#include<iostream>
using namespace std;
int main(){
    // brute force approach
    int a,b;
    cin>>a>>b;
    int ans=0;
    for(int i=1;i<=b;i++){
        if(a%i==0 && b%i==0){
            ans=i;
        }
    }
    cout<<ans;
}