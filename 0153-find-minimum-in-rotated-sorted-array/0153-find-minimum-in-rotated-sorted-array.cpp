class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int minval = INT_MAX;

        for(int val : nums){
            minval = min(minval , val);
        }

        return minval;
    }
};