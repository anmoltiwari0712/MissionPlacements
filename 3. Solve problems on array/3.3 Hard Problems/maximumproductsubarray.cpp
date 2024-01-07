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
    // Brute Force - T.C - O(N^3)
    int result=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int prod=1;
            for(int k=i;k<=j;k++){
                prod=prod*arr[k];
            }
            result=max(result,arr[k]);

        }
    }
    // Better Force - T.C - O(N^2)
    int result=INT_MIN;
    for(int i=0;i<n;i++){
        int prod=1;
        for(int j=i+1;j<n;j++){
            prod=prod*arr[j];
            result=max(result,arr[k]);

        }
    }
    // Optimal Approach - T.C - O(N)
    int prefix=1;
	int suffix=1;
	int ans=INT_MIN;
	for(int i=0;i<n;i++){
		if(prefix==0){
			prefix=1;
		}
		if(suffix==0){
			suffix=1;
		}
		prefix=prefix*arr[i];
		suffix=suffix*arr[n-i-1];
		ans=max(ans,max(prefix,suffix));

	}
	cout<< ans;
}