class Solution {
public:
    set<vector<int>> s;
    void helper(vector<int>& nums , int idx , vector<int>& arr, vector<vector<int>>& ans){
        int n = nums.size();
        if(idx == n){
            if(s.find(arr) == s.end()){
                ans.push_back(arr);
                s.insert(arr);
            }
            return;
        }

        arr.push_back(nums[idx]);

        helper(nums, idx+1 , arr , ans);

        arr.pop_back();

        helper(nums, idx+1 , arr , ans);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin() , nums.end());

        vector<int> arr;
        vector<vector<int>> ans;

        helper(nums, 0 , arr , ans);

        return ans;
    }
};