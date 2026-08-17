class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int , int>mp;

        int currSum = 0;
        int result = 0;

        mp.insert({0 , 1});

        for(int i=0; i<n; i++){
            currSum += nums[i];
            if(mp.find(currSum - k) != mp.end()){
                result += mp[currSum - k];
            }

            mp[currSum]++;
        }
        return result;
    }
};