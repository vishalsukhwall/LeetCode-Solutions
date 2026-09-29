class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        reverse(matrix.begin() , matrix.end());
        
        for(int i=0; i<row; i++){
            for(int j=i+1; j<col; j++){
                if(i + j == j + i){
                    swap(matrix[i][j] , matrix[j][i]);
                }
            }
        }
    }
};