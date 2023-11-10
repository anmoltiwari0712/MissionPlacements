#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=n*(n+1)/2;
    int sum2=0;
    for(int i=0;i<n-1;i++){
        sum2=sum2+arr[i];
    }
    cout<< sum-sum2;
}