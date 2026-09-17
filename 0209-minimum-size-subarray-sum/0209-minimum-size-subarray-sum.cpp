class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();

        int len = 0 , minlen = INT_MAX;
        int l = 0;
        int sum = 0;

        for(int r = 0; r<n; r++){
             sum += nums[r];
                while(sum >= target){
                    len = r - l + 1;
                    minlen = min(minlen , len);
                    sum -= nums[l];
                    l++;
                }
            }
        return (minlen == INT_MAX) ?  0 : minlen;
    }
};