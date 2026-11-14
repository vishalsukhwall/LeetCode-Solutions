class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int , int> mp;
        int count = 0 , currsum = 0;
        mp[0] = 1;
        
        for(int i=0; i<n; i++){
            if(nums[i] % 2 != 0){
                currsum += 1;
            }

            count += mp[currsum - k];
            mp[currsum]++;
        }

        return count;
    }
};