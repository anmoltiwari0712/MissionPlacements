#include<iostream>
#include<algorithm>
#include<limits.h>
#include<vector>
#include <unordered_set>
using namespace std;
bool linearsearch(vector<int>&a, int num){
    int n=a.size();
    for(int i=0;i<n;i++){
        if(a[i]==num){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    // Brute Force - O(N^2 )
    // int longest=1;
    // for(int i=0;i<arr.size();i++){
    //     int x=arr[i];
    //     int count=1;
    //     while(linearsearch(arr,x+1)==true){
    //         x=x+1;
    //         count++;
    //     }
    //     longest=max(longest,count);
    // }
    // cout<<longest;

    // Better Approach - O(N LOGN) + O (N)

    // sort(arr.begin(),arr.end());
    
    // int ans=INT_MIN;
    // int start=1;
    // for(int i=0;i<n;i++){
    //     if(arr[i+1]-arr[i]==1){
    //         start++;
    //     }
    //     else if(arr[i+1]=arr[i]){
    //         continue;
    //     }
    //     else{
    //         start=1;

    //     }
    //     ans=max(ans,start);
        
    // }

    // cout<<ans;

    // Optimal Approach 
    int n2=arr.size();
    if(n2==0){
        return 0;
    }

    int longest=1;
    unordered_set<int> st;
    for(int i=0;i<n2;i++){
        st.insert(arr[i]);
    }

    for(auto it:st){
        if(st.find(it-1)==st.end()){
            int cnt=1;
            int x=it;
            while(st.find(x+1)!=st.end()){
                x=x+1;
                cnt++;
            }
            longest=max(longest,cnt);
        }
    }
    cout<<longest;

}