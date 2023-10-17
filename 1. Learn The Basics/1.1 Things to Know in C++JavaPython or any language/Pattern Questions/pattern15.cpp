#include<iostream>
using namespace std;
/*
A B C D E
A B C D
A B C
A B
A
*/
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int start=65;
        for(int j=0;j<=n-i-1;j++){
            cout<<char(start)<<" ";
            start++;
        }
        cout<<endl;
    }
}