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
    // Extreme Brute Force Approach

//     set<int> ans;
//     for(int i=0;i<n;i++){
//         int count=0;
//         for(int j=0;j<n;j++){
//             if(arr[j]==arr[i]){
//                 count++;
//             }
//         }
//         if(count>=n/3){
//             ans.insert(arr[i]);
//         }
//     }
//    for (auto it=ans.begin(); it != ans.end(); ++it){
//         cout<<*it<<" ";
//    }

    // Brute Force Approach

    // vector<int> ls;
    // for(int i=0;i<n;i++){
    //     if(ls.size()==0 || ls[0]!=arr[i]){
    //         int count=0;
    //         for(int j=0;j<n;j++){
    //             if(arr[j]==arr[i]){
    //                 count++;
    //             }
    //         }
    //         if(count>n/3){
    //             ls.push_back(arr[i]);
    //         }
    //     }
    //     if(ls.size()==2){
    //         break;
    //     }
    // }
    // for(int i=0;i<ls.size();i++){
    //     cout<<ls[i]<<" ";
    // }

    // Better Approach T.C - O(N*2)

    // vector<int> ans;
    // map<int,int> mpp;
    // int maj=int(n/3)+1;
	// for(int i=0;i<arr.size();i++){
	// 	mpp[arr[i]]++;
    //     if(mpp[arr[i]]==maj){
    //         ans.push_back(arr[i]);
    //     }
	// }
	
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }

    // Optimal Approach - T.C - O(N) +O(N)
        int count1=0;
        int count2=0;
        int ele1=INT_MIN;
        int ele2=INT_MIN;

        for(int i=0;i<n;i++){
            if(count1==0 && ele2!=arr[i]){
                count1=1;
                ele1=arr[i];
            }
            else if(count2==0 && ele1!=arr[i]){
                count2=1;
                ele2=arr[i];
            }
            else if(arr[i]==ele1){
                count1++;
            }
            else if(arr[i]==ele2){
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
        count1=0;
        count2=0;
        int maj=(int)(n/3)+1;
        vector<int> ls;
        for(int i=0;i<n;i++){
            if(arr[i]==ele1){
                count1++;
            }
            if(arr[i]==ele2){
                count2++;
            }
        }
        if(count1>=maj){
            ls.push_back(ele1);
        }
        if(count2>=maj){
            ls.push_back(ele2);
        }
        for(int i=0;i<ls.size();i++){
            cout<<ls[i]<<" ";
        }
    
}