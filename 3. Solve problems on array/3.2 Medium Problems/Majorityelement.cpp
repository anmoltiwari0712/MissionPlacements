#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Brute Force Approach - O(N*2)
    // for(int i=0;i<n;i++){
    //     int count=0;
    //     for(int j=0;j<n;j++){
    //         if(arr[j]==arr[i]){
    //             count++;
    //         }
    //     }
    //     if(count>=n/2){
    //         return arr[i];
    //     }
    // }

    // Better Approach O(n*logn) + O(n)

    // map<int,int> mp;
	// for(int i=0;i<v.size();i++){
	// 	mp[v[i]]++;
	// }
	// for(auto it:mp){
	// 	if(it.second>v.size()/2){
	// 		return it.first;
	// 	}
	// }
	// return -1;

    // Optimal Approach - Moores voting Algorithm O(2n)
    int count=0;
    int el;
    for(int i=0;i<n;i++){
        if(count==0){
            count=1;
            el=arr[i];
        }
        else if(arr[i]==el){
            count++;
        }
        else{
            count--;
        }
    }
    int counter=0;
    for(int i=0;i<n;i++){
        if(arr[i]==el){
            counter++;
        }
    }
    if(counter>n/2){
        cout<<el;
    }
}
