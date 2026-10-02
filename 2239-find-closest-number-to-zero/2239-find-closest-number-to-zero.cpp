class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = nums[0];

        for(int value : nums){
            if(abs(value) < abs(ans) || abs(value) == abs(ans) && value > ans){
                ans = value;
            } 
        }

        return ans;
    }
};