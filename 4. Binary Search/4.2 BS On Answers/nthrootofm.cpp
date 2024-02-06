#include<iostream>
#include<math.h>
using namespace std;
#include<vector>
int func(int mid,int n,int m){
  long long ans=1;
  for(int i=1;i<=n;i++){
    ans=ans*mid;
    if(ans>m){
      return 2;
    }
    
  }
  if(ans==m){
    return 1;
  }
  return 0;
}

int main(){
    int n; //n is the nth root
    cin>>n;
    int m;
    cin>>m; //m is the number

    // Brute Force Approach - T.C O(m)
    for(int i=1;i<=m;i++){
        int calculated = pow(i,n);
        if(calculated == m){
            cout<< i;
        }
        else if(calculated>m){
            break;
        }
    }

    // Optimal Approach - T.C O(logN)
    int low=1;
    int high=m;
    while(low<=high){
        int mid=(low+high)/2;
        int midN=func(mid,n,m);
        if(midN==1){
            cout<<mid;
            break;
        }
        else if(midN==0){//0 means the ans is<m;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

}