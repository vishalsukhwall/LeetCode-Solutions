class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();

        int minsum = INT_MAX;
        for(int len = l; len <= r; len++){
            int sum = 0;
            
            for(int i=0; i<len; i++){
                sum += nums[i];
            }

            if(sum > 0) minsum = min(minsum , sum);

            for(int i=len; i<n; i++){
                sum += nums[i];
                sum -= nums[i-len];

                if(sum > 0) minsum = min(minsum , sum);
            }
        }

        return minsum == INT_MAX ? -1 : minsum;
    }
};