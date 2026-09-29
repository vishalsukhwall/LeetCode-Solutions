class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        vector<int> rowmaker(row , 0);
        vector<int> colmaker(col , 0);

        for(int r=0; r<row; r++){
            for(int c=0; c<col; c++){
                if(matrix[r][c] == 0){
                    rowmaker[r] = 1;
                    colmaker[c] = 1;
                }
            }
        }

        for(int r=0; r<row; r++){
            for(int c=0; c<col; c++){
                if(rowmaker[r] == 1 || colmaker[c] == 1){
                    matrix[r][c] = 0;
                }
            }
        }
    }
};