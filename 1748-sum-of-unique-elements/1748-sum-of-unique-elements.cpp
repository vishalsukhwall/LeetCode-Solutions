class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int , int> mp;

        for(int val : nums){
            mp[val]++;
        }

        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            if(mp[nums[i]] == 1){
                sum += nums[i];
            }
        }
        
        return sum;
    }
};