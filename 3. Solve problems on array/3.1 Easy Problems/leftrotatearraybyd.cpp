#include<iostream>
#include<vector>
using namespace std;
void Reverse(int arr[], int start, int end)
{
  while (start <= end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
int main(){
    int n;
    cout<<"Enter The no of elements: "<<endl;
    cin>>n;
    cout<<"Enter the elements: "<<endl;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int k;
    cout<<"Enter the k value: "<<endl; 
    cin>>k;
    Reverse(array, 0, k - 1);
    Reverse(array, k, n - 1);
    Reverse(array, 0, n - 1);
    
    cout<<"Array After left rotating is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}