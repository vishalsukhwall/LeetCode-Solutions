class Solution {
public:
    int totalFruit(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int , int> mp;

        int l = 0 , maxlen = INT_MIN;
        for(int r=0; r<n; r++){
            mp[nums[r]]++;

            while(mp.size() > 2){
                mp[nums[l]]--;

                if(mp[nums[l]] == 0){
                    mp.erase(nums[l]);
                }
                l++;
            }

            maxlen = max(maxlen , r-l+1);
        }

        return maxlen;
    }
};