#include<iostream>
#include<math.h>
using namespace std;
#include<vector>
int findmax(vector<int> arr){
    int maxi;
    for(int i=0;i<arr.size();i++){
        maxi=max(maxi,arr[i]);
    }
    return maxi;

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
    int limit;
    cin>>limit;
    int maxi=findmax(arr);
    for(int d=1;d<=maxi;d++){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=ceil((double)(arr[i])/(double)(d));
        }
        if(sum<=limit){
            cout<<d;
            break;
        }
    }
    
}