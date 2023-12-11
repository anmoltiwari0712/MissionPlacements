#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int target;
    cin>>target;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int left=0;
    int right=n-1;
    while(left<right){
        int sum=arr[left]+arr[right];
        if(sum==target){
            cout<<"Yes";
            break;
        }
        else if(sum>target){
            right--;
        }
        else{
            left++;
        }
    }
}