class Solution {
public:
    int maximumWealth(vector<vector<int>>& arr) {
        int row = arr.size();
        int col = arr[0].size();
        int maxsum = 0;

        for(int i=0; i<row; i++){
            int sum = 0;
            for(int j=0; j<col; j++){
                sum += arr[i][j];
            }
            maxsum = max(maxsum , sum);
        }

        return maxsum;
    }
};