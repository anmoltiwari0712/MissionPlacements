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
    // Brute Force - 
    // sort(arr.begin(),arr.end());
	// vector<vector<int>> ans;
	// for(int i=0;i<n;i++){
	// 	int start=arr[i][0];
	// 	int end=arr[i][1];
	// 	if(!ans.empty() && end<=ans.back()[1]){
	// 		continue;
	// 	}
	// 	else{
	// 		for(int j=i+1;j<n;j++){
	// 			if(arr[j][0]<=end){
	// 				end=max(end,arr[j][1]);
	// 			}
	// 			else{
	// 				break;
	// 			}
	// 		}
	// 	}
	// 	ans.push_back({start,end});

    // Optimal Approach - 
    

	}
}