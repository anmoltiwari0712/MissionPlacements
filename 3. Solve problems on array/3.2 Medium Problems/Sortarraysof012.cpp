#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Brute Force Approach is to use any sorting algorithm

    // Better Approach
    int count0=0;
    int count1=0;
    int count2=0;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count0++;
        }
        else if(arr[i]==1){
            count1++;
        }
        else if(arr[i]==2){
            count2++;
        }
    }
    for(int i=0;i<count0;i++){
        arr[i]=0;
    }
    for(int i=count0;i<count0+count1;i++){
        arr[i]=1;
    }
    for(int i=count0+count1;i<n;i++){
        arr[i]=2;
    }
    cout<<"Sorted Array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    // Optimal Approach - DNF Dutch national flag algorithm 
}