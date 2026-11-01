class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();

        int minval = INT_MAX;
        for(int val : nums){
            minval = min(minval , val);
        }

        int mlen = 0;

        for(int i=n-1; i>=0; i--){
            if(nums[i] - minval > 0){
                mlen += (nums[i] - minval);
            }
        }

        return mlen;
    }
};