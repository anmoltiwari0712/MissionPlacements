#include<iostream>
using namespace std;
int printn(int n){
    if(n==0){
        return 1;
    }
    cout<<n<<endl;
    printn(n-1);
}
int main(){
    int x;
    cin>>x;
    printn(x);
}