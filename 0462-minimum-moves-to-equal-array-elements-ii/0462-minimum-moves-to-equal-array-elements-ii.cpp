class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();

        long long mincount = INT_MAX;

        for(int i=0; i<n; i++){
            long long count = 0;

            for(int j=0; j<n; j++){
                count = count + abs(nums[i] - nums[j]);
            }

            mincount = min(mincount , count);
        }

        return mincount;
    }
};