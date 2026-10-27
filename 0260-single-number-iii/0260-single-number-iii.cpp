class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int , int> mp;

        for(int val : nums){
            mp[val]++;
        }

        vector<int> ans;
        for(int val : nums){
            if(mp[val] == 1){
                ans.push_back(val);
            }
        }

        return ans;
    }
};