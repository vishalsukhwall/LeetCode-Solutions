class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int , int> mp;
        int count = 0 , num = 0;
        mp[0] = 1;

        for(int i=0; i<n; i++){
            num += nums[i];

            int x = num - k;

            if(mp.find(x) != mp.end()){
                count += mp[x];
            }

            mp[num]++;
        }

        return count;
    }
};