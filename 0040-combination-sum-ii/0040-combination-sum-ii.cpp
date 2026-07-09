class Solution {
public:

    set<vector<int>> s;
    void combine(vector<int>& nums, int idx, vector<int>& comb, vector<vector<int>>& ans, int target){
        int n = nums.size();
        
        if(target == 0){
            if(s.find(comb) == s.end()){
                ans.push_back(comb);
                s.insert(comb);
                }
            return;
        }

        for(int i=idx; i<n; i++){

        if(i >= n || target < 0){
            return;
        }

        if(i > idx && nums[i] == nums[i-1]){
            continue;
        }

        if(nums[i] > target){
            break;
        }

        comb.push_back(nums[i]);
        combine(nums, i+1, comb, ans, target-nums[i]);
        comb.pop_back();
        }
        
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        vector<int> comb;
        vector<vector<int>> ans;

        combine(candidates, 0, comb, ans, target);
        return ans;
    }
};