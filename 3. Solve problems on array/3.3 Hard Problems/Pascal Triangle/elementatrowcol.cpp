#include<iostream>
using namespace std;
int ncr(int n,int r){
    int res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}
int main(){
    int row;
    int col;
    cout<<"Enter The Row: "<<endl;
    cin>>row;
    cout<<"Enter The Column: "<<endl;
    cin>>col;
    cout<<ncr(row-1,col-1);
}