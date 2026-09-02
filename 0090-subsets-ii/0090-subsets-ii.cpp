class Solution {
public:
    void helper(vector<int>& nums , int idx , vector<int>& ans , vector<vector<int>>& result){
        int n = nums.size();

        if(idx == n){
            result.push_back(ans);
            return;
        }

        ans.push_back(nums[idx]);
        helper(nums, idx+1 , ans , result);

        ans.pop_back();
        
        int i = idx + 1;
        while(i < n && nums[i] == nums[idx]){
            i++;
        }
        helper(nums, i , ans , result);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> result;

        sort(nums.begin() , nums.end());

        helper(nums , 0 , ans , result);
        
        return result;
    }
};