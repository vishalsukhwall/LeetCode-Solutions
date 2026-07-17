class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> ans;
        set<int> s;

        for(int i=0; i<nums.size(); i++){
            if(s.find(nums[i]) == s.end()){
                ans.push_back(nums[i]);
                s.insert(nums[i]);
            }
        }
        nums = ans;
        int n = nums.size();
        return n;
    }
};