class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();

        vector<int> arow (row , 0);
        vector<int> acol (col , 0);

        int zeroRow , zeroCol;

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(mat[i][j] == 0){
                    arow[i] = 1;
                    acol[j] = 1;
                }
            }
        }

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(arow[i] == 1 || acol[j] == 1){
                    mat[i][j] = 0;
                }
            }
        }
    }
};