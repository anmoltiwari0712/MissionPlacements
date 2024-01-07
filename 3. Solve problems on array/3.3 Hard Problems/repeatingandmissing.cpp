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
    // Brute Force Approach - T.C - O(N^2)

    // int repeating =-1;
    // int missing=-1;
    // for(int i=1;i<=n;i++){
    //     int count=0;
    //     for(int j=0;j<n;j++){
    //         if(arr[j]==i){
    //             count++;
    //         }
    //     }
    //     if(count==2){
    //         repeating=i;
    //     }
    //     else if(count==0){
    //         missing=i;
    //     }
    //     if(repeating!=-1 && missing!=-1){
    //         break;
    //     }
    // }
    // cout<<"Repeating is: "<<repeating<<" Missing Is: "<<missing;

    // Better Approach -T.C - O(2n)

    // int hash[n+1]={0};
    // for(int i=0;i<n;i++){
    //     hash[a[i]]++;
    // }
    // int repeating=-1;
    // int missing=-1;
    // for(int i=1;i<=n;i++){
    //     if(hash[i]==2){
    //         repeating=i;
    //     }
    //     else if(hash[i]==0){
    //         missing=i;
    //     }
    //     if(repeating!=-1 && missing!=-1){
    //         break;
    //     }
    // }
    // return {repeating,missing};




    // Optimal Approach - T.C - O(N)



    // long long n=a.size();
    // // Sum of n natural numbers
    // long long sn=(n*(n+1))/2;
    // // sum of square of n natural numbers
    // long long s2n=(n*(n+1)*(2*n+1))/6;

    // //sum of numbers in given array
    // long long s=0;
    // //sum of squares of numbers in given array
    // long long s2=0;

    // for(int i=0;i<n;i++){
    //     s=s+a[i];
    //     s2=s2+(long long)a[i]*(long long)a[i];
    // }

    // //s-sn=x-y
    // long long val1=s-sn;

    // //s2-s2n=x2-y2
    // long long val2=s2-s2n;

    // val2=val2/val1; // value of x+y

    // long long x=(val1+val2)/2; //value of x
    // long long y=x-val1;

    // return{(int)x,(int)y};

}