#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    cout<<"Array After sorting is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;

    for(int i=1;i<n;i++){
        int temp=array[i];
        int j=i-1;
        while(array[j]>temp && j>=0){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=temp;
    }
    cout<<"Array After sorting is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}