#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<vector>
int finddayswithgivencap(vector<int> &weights, int cap){
    int days=1;  //initially day-1
    int load=0;  //initial load of the ship is 0
    for(int i=0;i<weights.size();i++){
        if(load+weights[i]>cap){ //if at any point load exceeds ship 
        // capacity ship them in the next day
            days=days+1;
            load=weights[i]; //next day the load will begin from the 
            // next which was done.
        }
        else{
            // if not then keep adding load until capacity reaches
            load=load+weights[i];
        }
    }
    return days;
}
int main(){
    int n; 
    cin>>n;
    vector<int> weights;
    int ele;
    for(int i=0;i<n;i++){
        cin>>ele;
        weights.push_back(ele);
    }
    int givendays;
    cin>>givendays;

    //Brute Force Approach - T.C O(N * (sum(weights[]) – max(weights[]) + 1)
    int maxi=*max_element(weights.begin(), weights.end());  //max element in weights
    int sumval=accumulate(weights.begin(), weights.end(), 0);  //sum of weights

    for(int i=maxi;i<=sumval;i++){
        if(finddayswithgivencap(weights,i)<=givendays){
            cout<<i;
            break;
        }
    }

    // optimal Approach - T.C O(N * log(sum(weights[]) – max(weights[]) + 1)

    int low=*max_element(weights.begin(), weights.end());  //max element in weights
    int high=accumulate(weights.begin(), weights.end(), 0);  //sum of weights
    while(low<=high){
        // here we iterate from max element to the sum (capacity)
        int mid=(low+high)/2;
        int noofdays=finddayswithgivencap(weights,mid); 
        if(noofdays<=givendays){
            high=mid-1; //in that case we find a least element
        }
        else{
            low=mid+1;
        }
    }
    cout<< low;
}