#include<iostream>
using namespace std;
//Note this question on striver sheet and codestudio is different
/*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA 
*/
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        // space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        int breakpoint=(2*i+1)/2;
        int start=65;
        for(int j=1;j<=2*i+1;j++){
            cout<<char(start);
            if(j<=breakpoint){
                start++;
            }
            else{
                start--;
            }
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
        
    }
}