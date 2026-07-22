class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int missing_number = n;

        for(int i=0; i<n; i++){
            missing_number = missing_number ^ i ^ nums[i];
        }
        return missing_number;
    }
};