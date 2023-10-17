#include<iostream>
using namespace std;
//Note this question on striver sheet and codestudio is different
/*
C
C B
C B A
*/
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int start=64+n;
        for(int j=0;j<=i;j++){
            cout<<char(start)<<" ";
            start--;
        }
        cout<<endl;
    }
    
}