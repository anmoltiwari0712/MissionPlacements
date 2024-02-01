#include<iostream>
using namespace std;
#include<vector>
int findceil(vector<int> &arr,int x,int n){
	int low=0;
	int high=n-1;
	int ans=-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]==x){
			ans=arr[mid];
			return ans;
		}
		else if(arr[mid]>=x){
			ans=arr[mid];
			high=mid-1;
		}
		else{
			low=mid+1;
		}
		
	}
	return ans;
}

int findfloor(vector<int> &arr,int x,int n){
	int low=0;
	int high=n-1;
	int ans=-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]==x){
			ans=arr[mid];
			return ans;
			
		}
		else if(arr[mid]<=x){
			ans=arr[mid];
			low=mid+1;
		}
		else{
			high=mid-1;
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
    int f = findfloor(arr, x, n);
	int c = findceil(arr, x, n);
    cout<<f<<endl;
    cout<<c<<endl;

}