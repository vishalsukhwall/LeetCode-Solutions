class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int totalSum = accumulate(nums.begin() , nums.end() , 0);

        int target = totalSum - x;

        int left = 0 , longest = -1;
        int sum = 0;

        for(int right = 0; right < n; right++){
            sum += nums[right];

            while(left <= right && sum > target){
                sum -= nums[left++];
            }

            if(sum == target){
                longest = max(longest , right - left + 1);
            }
        }

        return longest == -1 ? -1 : n - longest;
    }
};