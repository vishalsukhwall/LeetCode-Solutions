class Solution {
public:
    int maxSum(vector<vector<int>>& nums) {
        int row = nums.size();
        int col = nums[0].size();
        int maxval = INT_MIN;

        for(int i=1; i<row-1; i++){
            for(int j=1; j<col-1; j++){
                int sum = (nums[i-1][j-1] + nums[i-1][j] + nums[i-1][j+1]) + nums[i][j] + (nums[i+1][j-1] + nums[i+1][j] + nums[i+1][j+1]);

                maxval = max(maxval , sum);
            }
        }

        return maxval;
    }
};