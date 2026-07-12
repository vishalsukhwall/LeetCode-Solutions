class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int srow = 0, erow = matrix.size()-1;
        int scol = 0, ecol =  matrix[0].size()-1;
        vector<int> ans;

        while(srow <= erow && scol <= ecol){

            for(int i=scol; i<=ecol; i++){
            ans.push_back(matrix[srow][i]);
        }

        for(int i=srow+1; i<=erow; i++){
            ans.push_back(matrix[i][ecol]);
        }

        if(srow == erow){
                break;
        }
        for(int i=ecol-1; i>=scol; i--){
             ans.push_back(matrix[erow][i]);
        }

        if(scol == ecol){
                break;
        }
        for(int i=erow-1; i>=srow+1; i--){
             ans.push_back(matrix[i][scol]);
            }
            srow++, erow--;
            scol++, ecol--;
        }
       return ans; 
    }
};