class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int , int> mp;

        for(int val : nums){
            mp[val]++;
        }

        for(int i=0; i<nums.size(); i++){
            if(mp[nums[i]] % 2 != 0){
                return false;
            }
        }
        return true;
    }
};