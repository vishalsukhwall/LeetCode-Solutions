class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        k = k % (m*n);

        for(int a=1; a<=k; a++){
            int last_value = grid[m-1][n-1];
            for(int i=m-1; i>=0; i--){
                for(int j=n-1; j>=0; j--){
                    if(j > 0){
                        grid[i][j] = grid[i][j-1];
                    }
                    else if(i > 0){
                        grid[i][0] = grid[i-1][n-1]; 
                    }
                }
            }
            grid[0][0] = last_value;
        }
        return grid;
    }
};