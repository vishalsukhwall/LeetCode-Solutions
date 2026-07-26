class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        int arr1 = 1;
        int arr2 = 1;
        int ans = 1;
        
        sort(nums.begin() , nums.end());

        arr1 *= nums[n-1] * nums[n-2] * nums[n-3];

        arr2 *= nums[0] * nums[1] * nums[n-1];

        ans = max(arr1 , arr2);

        return ans;   
    }
};