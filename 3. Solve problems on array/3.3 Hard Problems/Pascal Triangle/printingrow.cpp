#include<iostream>
using namespace std;
int ncr(int n,int r){
    int res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    // Brute Force Approach T.C - o(ROW*COL)

    // for (int c = 1; c <= n; c++) {
    //     cout << ncr(n - 1, c - 1) << " ";
    // }

    // Optimal Approach - o(ROW)
    int ans=1;
    cout<<ans<<" ";
    for(int i=1;i<n;i++){
        ans=ans*(n-i);
        ans=ans/i;
        cout<<ans<<" ";
    }

}