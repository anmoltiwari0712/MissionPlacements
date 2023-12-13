#include<iostream>
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

    // Brute  Force - O(N+N/2)
    // vector<int> pos;
    // vector<int> neg;
    // for(int i=0;i<arr.size();i++){
    //     if(arr[i]>0){
    //         pos.push_back(arr[i]);
    //     }
    //     else{
    //         neg.push_back(arr[i]);
    //     }
    // }
    // for(int i=0;i<arr.size()/2;i++){
    //     arr[2*i]=pos[i];
    //     arr[2*i+1]=neg[i];
    // }

    // Optimal Approach - O(N)

    int pos=0;
    int neg=1;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            ans[neg]=arr[i];
            neg=neg+2;
        }
        else{
            ans[pos]=arr[i];
            pos=pos+2;
        }
    }


    // Printing the vector begins here
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    
}