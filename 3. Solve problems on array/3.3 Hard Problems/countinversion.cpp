    // Optimal Force - T.C - O(N*logN)
int merge(vector<int> &arr,int low, int mid, int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;
    int cnt = 0;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            cnt += (mid - left + 1);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
    return cnt;
}
int mergeSort(vector<int> &arr,int low,int high){
    int counter=0;
    if(low>=high){
        return counter;
    }
    int mid=(low+high)/2;
    counter+=mergeSort(arr,low,mid);
    counter+=mergeSort(arr,mid+1,high);
    counter+=merge(arr,low,mid,high);
    return counter;
}
int numberOfInversions(vector<int>&a, int n) {
    return mergeSort(a, 0, n-1);
}
#include<algorithm>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<limits.h>
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
    // Brute Force - T.C - O(N^2)
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) cnt++;
        }
    }
    return cnt;
    

}