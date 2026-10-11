class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();

        reverse(mat.begin() , mat.end());

        for(int r=0; r<row; r++){
            for(int c=0; c<col; c++){
                if(r < c){
                    swap(mat[r][c] , mat[c][r]);
                }
            }
        }
    }
};