#include<iostream>
using namespace std;
#include<vector>
int main(){
    int n; 
    cin>>n;
    vector<int> arr;
    int ele;
    for(int i=0;i<n;i++){
        cin>>ele;
        arr.push_back(ele);
    }
    // Brute force approach - T.C - O(N)
    if(n==1){
        cout<<arr[0];
    }
    for(int i=0;i<n;i++){
        if(i==0){
            if(arr[i]!=arr[i+1]){
                cout<<arr[i];
            }
        }
        else if(i==n-1){
            if(arr[i]!=arr[i-1]){
                cout<<arr[i];
            }
        }
        else{
            if(arr[i]!=arr[i+1] && arr[i]!=arr[i-1]){
                cout<<arr[i];
            }
        }
    }
    // Better approach - T.C - O(N)
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    cout<<ans;
    // Optimal Approach -T.C O(log n)
    int n=arr.size();
	if(n==1){
		return arr[0];
	}
	if(arr[0]!=arr[1]){
		return arr[0];
	}
    if(arr[n-1]!=arr[n-2]){
		return arr[n-1];
	}
	int low=1;
	int high=n-2;

	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1]){
			return arr[mid];
		}
		if(mid%2==1 && arr[mid]==arr[mid-1] || mid%2==0 && arr[mid]==arr[mid+1]){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return -1;
    

}