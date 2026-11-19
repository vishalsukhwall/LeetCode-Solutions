class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int , int> mp;

        for(int val : nums){
            mp[val]++;
        }

        vector<int> ans;
        for(int val : nums){
            if(mp[val] == 2){
                ans.push_back(val);
                mp[val]--;
            }
        }

        return ans;
    }
};