class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int , int> mp;
        vector<int> ans = nums;
        sort(ans.begin() , ans.end());

        int n = ans.size()-1;
        for(int i=ans.size()-1; i>=0; i--){
            mp[ans[i]] = n;
            n--;
        }
        
        for(int i=0; i<nums.size(); i++){
            ans[i] = mp[nums[i]];
        }

        return ans;
    }
};