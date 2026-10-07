class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;

        int leftSum = 0;
        int rightSum = accumulate(nums.begin() , nums.end() , 0);

        for(int i=0; i<n; i++){
            rightSum = rightSum - nums[i];

            ans.push_back(abs(leftSum - rightSum));
            leftSum += nums[i];
        }


        return ans;
    }
};