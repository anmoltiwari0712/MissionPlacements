// Brute Force - T.C - O((N*M)*(N + M)) + O(N*M)

// void markrow(vector<vector<int>> &matrix, int n, int m,int i){
// 	for(int j=0;j<m;j++){
// 		if(matrix[i][j]!=0){
// 			matrix[i][j]=-1;
// 		}
// 	}
// }
// void markcolumn(vector<vector<int>> &matrix, int n, int m,int j){
// 	for(int i=0;i<n;i++){
// 		if(matrix[i][j]!=0){
// 			matrix[i][j]=-1;
// 		}
// 	}
// }
// vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
// 			if(matrix[i][j]==0){
// 				markrow(matrix,n,m,i);
// 				markcolumn(matrix,n,m,j);
// 			}
// 		}
// 	}
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
// 			if(matrix[i][j]==-1){
// 				matrix[i][j]=0;
// 			}
// 		}
// 	}
// 	return matrix;

// }

// Better Approach - T.C - O(N^2)


// vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
// 	int row[n]={0};
// 	int col[m]={0};
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
// 			if(matrix[i][j]==0){
// 				row[i]=1;
// 				col[j]=1;
// 			}
// 		}
// 	}
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
// 			if(row[i] || col[j]){
// 				matrix[i][j]=0;
// 			}
// 		}
// 	}
// 	return matrix;
// }

