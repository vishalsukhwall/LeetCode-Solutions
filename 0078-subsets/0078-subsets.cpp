class Solution {
public:
    void helper(vector<int>& nums, int idx, vector<int>& val, vector<vector<int>>& ans){
        if(idx == nums.size()){
            ans.push_back(val);
            return;
        }
            val.push_back(nums[idx]);

            helper(nums, idx+1, val, ans);

            val.pop_back();

            helper(nums, idx+1, val, ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> val;
        vector<vector<int>> ans;

        helper(nums, 0, val, ans);
        return ans;
    }
};