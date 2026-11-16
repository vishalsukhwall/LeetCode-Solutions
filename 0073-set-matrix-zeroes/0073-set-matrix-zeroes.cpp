class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();

        vector<int> zeroR(row , 0);
        vector<int> zeroC(col , 0);
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(mat[i][j] == 0){
                    zeroR[i] = 1;
                    zeroC[j] = 1;
                }
            }
        }

        for(int i=0; i<zeroR.size(); i++){
            for(int j=0; j<zeroC.size(); j++){
                if(zeroR[i] == 1){
                    mat[i][j] = 0;
                }

                if(zeroC[j] == 1){
                    mat[i][j] = 0;
                }
            }
        }
    }
};