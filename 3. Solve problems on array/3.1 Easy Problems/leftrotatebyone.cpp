#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    // brute force approach
    int temp=array[0];
    for(int i=1;i<n;i++){
        array[i-1]=array[i];
    }
    array[n-1]=temp;
    // optimal approach
    // int temp;
    // for(int i=0;i<n-1;i++){
    //     temp=array[i];
    //     array[i]=array[i+1];
    //     array[i+1]=temp;
    // }
    cout<<"Array After left rotating is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}