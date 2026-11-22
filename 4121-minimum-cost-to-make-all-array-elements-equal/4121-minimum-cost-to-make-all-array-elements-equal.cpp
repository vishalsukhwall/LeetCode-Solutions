class Solution {
public:
    long long minCost(vector<int>& nums) {
        int n = nums.size();
        long long sum = LLONG_MAX;

        for(int i=1; i<n-1; i++){
            int j = i-1;
            while(j >= 0 && nums[i] == nums[j]) j--;
            long long cost = 1LL * (j + 1) * nums[i];

            j = i+1;
            while(j < n && nums[i] == nums[j]) j++;
            cost += 1LL * (n - j) * nums[i];

            sum = min(sum , cost);
            i = j-1;
        }

        return sum;
    }
};