#include<iostream>
using namespace std;
int powerofn(int n){
    if(n==0){
        return 1;
    }
    return 2 * powerofn(n-1);
}
int main(){
    int x;
    cin>>x;
    cout<<powerofn(x);

}