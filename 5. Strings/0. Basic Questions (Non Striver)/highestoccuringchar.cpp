//Brute Force Approach
char highestOccurringChar(char input[]) {
    // Write your code here
    int arr[26]={0};
    int n=strlen(input);
    for(int i=0;i<n;i++){
        int number=input[i]-'a';
        arr[number]++;
    }
    int maxi=-1;
    int ans=-1;
    for(int i=0;i<26;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
            ans=i;
        }
    }
    return ans + 'a';
}
//Optimal Approach

map<char,int> mpp;
    int n=strlen(input);
    for(int i=0;i<n;i++){
        mpp[input[i]]++;
    }
    int maxi=-1;
    char ans;
    for(auto it:mpp){
        if(it.second>maxi){
            maxi=it.second;
            ans=it.first;
        }
    }
    return ans;