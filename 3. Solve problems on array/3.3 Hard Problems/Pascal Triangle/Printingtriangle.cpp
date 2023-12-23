#include<iostream>
#include<vector>
using namespace std;
vector<int> generateRow(int row) {
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1); 
    for (int col = 1; col < row; col++) {
        ans = ans * (row - col);
        ans = ans / col;
        ansRow.push_back(ans);
    }
    return ansRow;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> ans;
    for (int row = 1; row <= n; row++) {
        ans.push_back(generateRow(row));
    }
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << endl;
    }
}