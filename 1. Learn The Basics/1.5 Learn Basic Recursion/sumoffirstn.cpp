#include<iostream>
using namespace std;
int sumofn(int n){
    if(n==0){
        return 0;
    }
    int presum=sumofn(n-1);
    return n+presum;
}
int main(){
    int n;
    cin>>n;
    cout<<sumofn(n);
}