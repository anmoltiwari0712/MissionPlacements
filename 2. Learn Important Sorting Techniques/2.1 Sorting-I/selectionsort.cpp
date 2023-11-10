#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    cout<<"Array Before sorting is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(array[j]<array[min]){
                min=j;
            }
        }
        if(min!=i){
            int temp=array[i];
            array[i]=array[min];
            array[min]=temp;
        }
        
    }
    cout<<"Array After sorting is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}