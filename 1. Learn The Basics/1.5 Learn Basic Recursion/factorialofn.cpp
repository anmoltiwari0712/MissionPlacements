#include<iostream>
using namespace std;
int factofn(int n){
    if(n==0){
        return 1;
    }
    int chotip=factofn(n-1);
    int badip=n*chotip;
    return badip;
}
int main(){
    int n;
    cin>>n;
    cout<<factofn(n);
}