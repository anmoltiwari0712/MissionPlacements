#include<iostream>
using namespace std;
/*
A 
A B 
A B C 
A B C D 
A B C D E  
*/
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int start=65;
        for(int j=0;j<=i;j++){
            cout<<char(start)<<" ";
            start++;
        }
        cout<<endl;
    }
}