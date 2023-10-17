#include<iostream>
using namespace std;
//Note this question on striver sheet and codestudio is different
/*
E 
D E 
C D E 
B C D E 
A B C D E 
*/
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int start=65;
        for(int j=1;j<=i;j++){
            cout<<char(start+n-i)<<" ";
            start=start+1;
        }
        cout<<endl;
    }
    
}