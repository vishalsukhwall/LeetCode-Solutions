class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        vector<int> ans;

        int srow = 0 , erow = n-1;
        int scol = 0 , ecol = m-1;

        while(srow <= erow && scol <= ecol){
            for(int i=scol; i<=ecol; i++){
                ans.push_back(mat[srow][i]);
            }
            srow++;

            for(int i=srow; i<=erow; i++){
                ans.push_back(mat[i][ecol]);
            }
            ecol--;

            if(srow <= erow){
                for(int i=ecol; i>=scol; i--){
                    ans.push_back(mat[erow][i]);
                }
                erow--;
            }

            if(scol <= ecol){
                for(int i=erow; i>=srow; i--){
                    ans.push_back(mat[i][scol]);
                }
                scol++;
            }
        }
        return ans;
    }
};