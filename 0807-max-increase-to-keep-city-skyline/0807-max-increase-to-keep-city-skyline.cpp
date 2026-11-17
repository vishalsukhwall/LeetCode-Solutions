class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

        vector<int> rmax(row , 0);
        vector<int> cmax(col , 0);

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                rmax[i] = max(rmax[i] , grid[i][j]);
                cmax[j] = max(cmax[j] , grid[i][j]);
            }
        }

        int result = 0;
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                result += abs(min(rmax[i] , cmax[j]) - grid[i][j]);
            }
        }

        return result;
    }
};