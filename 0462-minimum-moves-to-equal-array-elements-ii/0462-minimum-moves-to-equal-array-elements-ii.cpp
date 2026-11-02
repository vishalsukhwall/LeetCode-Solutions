class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin() , nums.end());

        int count = 0 , mid = n/2;
        for(int i=0; i<n; i++){
            count += abs(nums[mid] - nums[i]);
        }

        return count;
    }
};