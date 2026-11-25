class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> nums;

        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                nums.push_back(grid[i][j]);
            }
        }

        int n = nums.size();
        int dupl = 0;

        sort(nums.begin() , nums.end());

        for(int i=1; i<n; i++){
            if(nums[i] == nums[i-1]){
                dupl = nums[i];
            }
        }

        int total = 0 , currsum = 0;
        for(int i=0; i<n; i++){
            total = total + i + 1;
            currsum += nums[i];
        }

        int miss = total - currsum + dupl;

        return {dupl , miss};
    }
};