class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;

        int l = 0 , num = 1;
        for(int r=0; r<n; r++){
            num *= nums[r];

            while(l < r && num >= k){
                num /= nums[l];
                l++;
            }

            if(num < k){
                count += r - l + 1;
            }
        }
        
        return count;
    }
};