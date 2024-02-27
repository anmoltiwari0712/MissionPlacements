bool wecanplace(vector<int> &stalls,int dist,int cows){
    int n=stalls.size();
    int last=stalls[0];
    int cntofcows=1;
    for(int i=1;i<n;i++){
        if(stalls[i]-last>=dist){
            cntofcows++;
            last=stalls[i];
        }
        if(cntofcows>=cows){
            return true;
        }
    }
    return false;
}
int aggressivecows(vector<int> &stalls,int k){
    int n=stalls.size();
    sort(stalls.begin(),stalls.end());
    int limits=stalls[n-1]-stalls[0];
    for(int i=1;i<=limits;i++){
        if(wecanplace(stalls,i,k)){
            continue;
        }
        else{
            return i-1;
        }
    }
    return limits;
}


int aggressivecows(vector<int> &stalls,int k){
    int n=stalls.size();
    sort(stalls.begin(),stalls.end());
    int low=q;
    int high=stalls[n-1]-stalls[0];
    while(low<=high){
        int mid=(low+high)/2;
        if(wecanplace(stalls,mid,k)==true){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return high;

}