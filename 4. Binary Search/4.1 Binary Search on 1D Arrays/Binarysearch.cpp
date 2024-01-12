#include<iostream>
using namespace std;
int binraysearch(int arr[],int n,int target){
    int start=0;
    int end=n;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
    }
    return -1;
}
int main(){
    int n; 
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the number to search: "<<endl;
    cin>>key;
    cout<<binraysearch(arr,n,key);


}