#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            temp.push_back(a[i]);
        }
    }
    int k=temp.size();
    for(int i=0;i<k;i++){
        a[i]=temp[i];
    }
    for(int i=k;i<n;i++){
        a[i]=0;
    }
    // Optimal Approach
    // int j=-1;
    // for(int i=0;i<n;i++){
    //     if(a[i]==0){
    //         j=i;
    //         break;
    //     }
    // }
    // for(int i=j+1;i<n;i++){
    //     if(a[i]!=0){
    //         int temp=a[i];
    //         a[i]=a[j];
    //         a[j]=temp;
    //         j++;
    //     }
    // }
    cout<<"Array After Moving is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}