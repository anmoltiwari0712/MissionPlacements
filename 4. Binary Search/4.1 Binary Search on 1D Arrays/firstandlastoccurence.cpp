#include<iostream>
using namespace std;
#include<vector>
int firstoccurence(vector<int>& arr, int n, int k){
    int low=0;
    int high=n-1;
    int first=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k){
            first=mid;
            high=mid-1;
        }
        else if(arr[mid]<k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return first;
}
int lastoccurence(vector<int>& arr, int n, int k){
    int low=0;
    int high=n-1;
    int last=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k){
            last=mid;
            low=mid+1;
        }
        else if(arr[mid]<k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return last;
}
int lowerbound(vector<int>& arr, int n, int k){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=k){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }

    }
    return ans;
  
}
int upperbound(vector<int>& arr, int n, int k){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>k){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }

    }
    return ans;
  
}
int main(){
    int n; 
    cin>>n;
    vector<int> arr;
    int ele;
    for(int i=0;i<n;i++){
        cin>>ele;
        arr.push_back(ele);
    }
    int x;
    cin>>x;
    // Brute Force Approach - T.C - O(N)
    int first=-1;
    int last=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            if(first==-1){
                first=i;
            }
            last=i;
        }
    }
    cout<<"First Occurence is: "<<first<<endl;
    cout<<"Last Occurence is: "<<last<<endl;

    // Better Approach - T.C - O(2*logN)
    int lb = lowerbound(arr, n, x);
    if (lb == n || arr[lb] != x) return { -1, -1};
    int ub = upperbound(arr, n, x);
    cout<<lb<<ub - 1;

    // optimal approach - T.C - 
    int first = firstoccurence(arr, n, k);
    if (first == -1) return { -1, -1};
    int last = lastoccurence(arr, n, k);
    return {first, last};


}
