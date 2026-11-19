class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());

        if(n == 3){
            return 0;
        }
    
        int minval = INT_MAX;

        minval = min(minval , nums[n-2] - nums[1]);
        minval = min(nums[n-1] - nums[2] , minval);
        minval = min(minval , nums[n-3] - nums[0]);

        return minval;
    }
};