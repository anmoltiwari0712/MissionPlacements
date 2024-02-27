int countstudents(vector<int> &arr,int pages){
    int n=arr.size();
    int students=1;
    long long pagestudent=0;
    for(int i=0;i<n;i++){
        if(pagestudent+arr[i]<=pages){
            pagestudent=pagestudent+arr[i];
        }
        else{
            students++;
            pagestudent=arr[i];
        }

    }
    return students;
}
//Brute Force Approach - T.C - O (sum-max+1)*n
int findpages(vector<int> &arr,int n,int m){
    if(m>n){
        return -1;
    }
    low=*max_element(arr.begin(),arr.end());
    high=accumulate(arr.begin(),arr.end(),0);
    for(int i=low;i<=high;i++){
        if(countstudents(arr,i)==m){
            return i;
        }
        
    }
    return low;
}

//Optimal Approach - T.C - O log(sum-max+1) * O(n)

int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    if(m>n){
        return -1;
    }
    int low=*max_element(arr.begin(),arr.end());
    int high=accumulate(arr.begin(),arr.end(),0);
    while(low<=high){
        int mid=(low+high)/2;
        int students=countstudents(arr,mid);
        if(students>m){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}