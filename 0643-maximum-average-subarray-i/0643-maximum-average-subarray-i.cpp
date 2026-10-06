class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        int maxavg = 0;

        for(int i=0; i<k; i++){
            sum += nums[i];
        }

        maxavg = sum;
        for(int i=k; i<n; i++){
            sum = sum - nums[i-k] + nums[i];
            maxavg = max(maxavg , sum);
        }

        return (double) maxavg / k;
    }
};