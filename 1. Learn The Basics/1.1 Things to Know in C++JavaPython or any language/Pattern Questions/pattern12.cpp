#include<iostream>
using namespace std;
//Note this question on striver sheet and codestudio is different
/*
1            1 
1 2          2 1 
1 2 3        3 2 1 
1 2 3 4      4 3 2 1 
1 2 3 4 5    5 4 3 2 1 
1 2 3 4 5 6  6 5 4 3 2 1 
*/
int main(){
    int n;
    cin>>n;
    int space=2*(n-1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        for(int j=0;j<=space;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
        space=space-2;

    }
    
}