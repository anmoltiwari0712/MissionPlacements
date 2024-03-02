#include <iostream>
#include <vector>
using namespace std;
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
    // Brute Force - T.C - O(n)
    int row=mat.size();
    int col=mat[0].size();
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(mat[i][j]==target){
                return true;
            }
        }
    }
    return false;

    // Optimal Approach - T.C - o(log(nxm))
    bool binarysearch(vector<int> &mat,int target){
        int n=mat.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(mat[mid]==target){
                return true;
            }
            else if(target>mat[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& mat, int target) {
       int n = mat.size();
        int m = mat[0].size();

    for (int i = 0; i < n; i++) {
        if (mat[i][0] <= target && target <= mat[i][m - 1]) {
            return binarysearch(mat[i], target);
        }
    }
    return false; 

}