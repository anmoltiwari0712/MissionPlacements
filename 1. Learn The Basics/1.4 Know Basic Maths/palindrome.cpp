#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int reverse=0;
    int temp=n;
    while(n>0){
        int lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n=n/10;
    }
    if(temp==reverse){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
}