// Brute Force Approach - T.C - O(N+M) + O(N+M)
int n = a.size();
int m = b.size();
int left=0;
int right=0;
int index = 0;
long long arr[n+m];
while(left<n && right<m){
    if(a[left]<=b[right]){
        arr[index] = a[left];
        index++;
        left++;

    }
	else{
        arr[index] = b[right];
        index++;
        right++;
    }
}
while(left<n){
    arr[index++] = a[left++];
}
while(right<m){
    arr[index++] = b[right++];
}

for(int i=0;i<n+m;i++){
    if(i<n){
		a[i] = arr[i];
	} 
    else{
		b[i-n] = arr[i];
	} 

}

// Better Approach - T.C - 
int n=a.size();
int m=b.size();
int left=n-1;
int right=0;
while(left>=0 && right<m){
	if(a[left]>b[right]){
		swap(a[left],b[right]);
		left--;
		right++;
	}
	else{
		break;
	}
}
sort(a.begin(),a.end());
sort(b.begin(),b.end());
