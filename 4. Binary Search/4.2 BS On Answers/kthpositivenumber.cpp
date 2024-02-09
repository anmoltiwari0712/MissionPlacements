#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin>>n;
    vector<int> arr;
    int ele;
    for(int i=0;i<n;i++){
        cin>>ele;
        arr.push_back(ele);
    }
    int k;
    cin>>k;
    // Brute Force Approach - T.C O(N)
    for(int i=0;i<n;i++){
        if(arr[i]<=k){
            k++;
        }
        else{
            break;
        }
    }
    cout<<k;
    //optimal approach - T.C O(log n)
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        int missing = vec[mid] - (mid + 1);
        if (missing < k) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    cout<< k + high + 1;
}
