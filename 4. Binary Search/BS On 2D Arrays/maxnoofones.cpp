#include <iostream>
#include <vector>
using namespace std;

 // Display the matrix
    // cout << "The matrix is:" << endl;
    // for (int i = 0; i < rows; ++i) {
    //     for (int j = 0; j < cols; ++j) {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

int main() {
    int rows, cols;
    
    // Get the number of rows and columns from the user
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    
    // Declare a 2D vector to store the matrix
    vector<vector<int>> matrix(rows, vector<int>(cols));
    
    // Input values into the matrix
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> matrix[i][j];
        }
    }
    // Brute Force - T.C - O(nxm)
    int cnt_max=0;
    int index=-1;
    for(int i=0;i<rows;i++){
        int cnt_ones=0;  
        for(int j=0;j<cols;j++){
            cnt_ones=cnt_ones+matrix[i][j];

        } 
        if(cnt_ones>cnt_max){
            cnt_max=cnt_ones;
            index=i;
        }
    }
    cout<<index;

    // Optimal Approach - T.C - O (N x log m)
    int lowerbound(vector<int> &arr,int n,int x){
        int low=0;
        int high=n-1;
        int ans=n;

        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]>=x){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
    int cnt_max=0;
    int index=-1;
    for(int i=0;i<rows;i++){
        int cnt_ones=m-lower_bound(matrix[i],m,1);
        if(cnt_ones>cnt_max){
            cnt_max=cnt_ones;
            index=i;
        }
    }
    return index;
   

}
