class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int , int> mp;
        mp[0] = 1;

        int ans = 0 , currsum = 0;
        for(int i=0; i<n; i++){
            if(nums[i] % 2 != 0){
                currsum += 1;
            }

            ans += mp[currsum - k];
            mp[currsum]++;
        }

        return ans;
    }
};