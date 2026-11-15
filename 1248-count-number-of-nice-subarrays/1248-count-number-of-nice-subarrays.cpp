class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int , int> mp;
        int ans = 0 , sum = 0;
        mp[0] = 1;

        for(int i=0; i<n; i++){
            if(nums[i] % 2 != 0){
                sum += 1;
            }

            ans += mp[sum - k];
            mp[sum]++;
        }

        return ans;
    }
};