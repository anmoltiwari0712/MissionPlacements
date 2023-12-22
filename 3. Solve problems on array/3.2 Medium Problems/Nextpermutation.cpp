#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    // Brute Force Approach - T.C 


    // next_permutation(arr.begin(), arr.end());
    // cout<<"The Next Permutation is: "<<endl;

    
    // Optimal Approach - T.C - O(3N)
    int ind=-1;
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            ind = i;
            break;
        }
    }
    if(ind==-1){
        reverse(arr.begin(), arr.end());
    }
    for(int i=n-1;i>ind;i--){
        if(arr[i]>arr[ind]){
            swap(arr[i],arr[ind]);
            break;
        }
    }
    reverse(arr.begin() + ind + 1, arr.end());

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}