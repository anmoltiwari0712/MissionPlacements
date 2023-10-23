#include<iostream>
using namespace std;
int fiboofn(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int ans=fiboofn(n-1) + fiboofn(n-2);
    return ans;
}
int main(){
    int x;
    cin>>x;
    cout<<fiboofn(x);
}