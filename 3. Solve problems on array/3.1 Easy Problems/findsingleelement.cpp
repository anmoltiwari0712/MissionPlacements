#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    // APPROACH 1 - Brute Force
    // for(int i=0;i<n;i++){
    //     int num=array[i];
    //     int counter=0;
    //     for(int j=0;j<n;j++){
    //         if(array[j]==num){
    //             counter++;
            
    //         }
    //         if(counter==1){
    //             cout<<num;
    //         }
    //     }

    // APPROACH - 2 - Better APPROACH

    // for(int i=0;i<n;){
    //     if(array[i]!=array[i+1]){
    //         return array[i];
    //     }
    //     else{
    //         i=i+2;
    //     }
    // }

    // Optimal Approach
    // int xorr = 0;
    // for (int i = 0; i < n; i++) {
    //     xorr = xorr ^ array[i];
    // }
    // cout<< xorr;
    
}