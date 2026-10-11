class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();

        vector<int> zrow(row , 0);
        vector<int> zcol(col , 0);

        for(int r=0; r<row; r++){
            for(int c=0; c<col; c++){
                if(mat[r][c] == 0){
                    zrow[r] = 1;
                    zcol[c] = 1;
                } 
            }
        }

        for(int r=0; r<row; r++){
            for(int c=0; c<col; c++){
                if(zrow[r] == 1 || zcol[c] == 1){
                    mat[r][c] = 0;
                } 
            }
        }
    }
};