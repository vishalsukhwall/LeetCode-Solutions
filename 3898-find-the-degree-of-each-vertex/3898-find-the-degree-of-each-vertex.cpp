class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();

        vector<int> ans;

        for(int i=0; i<row; i++){
            int count = 0;
        
            for(int j=0; j<col; j++){
                
                if(mat[i][j] == 1){
                    count++;
                }

            }

            ans.push_back(count);
        }

        return ans;
    }
};