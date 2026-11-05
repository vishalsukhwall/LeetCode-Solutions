class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int , int> mp;
        int ans = 0;

        for(int val : nums){
            mp[val]++;
        }

        int count = 0;
        int maxfreq = 0;
        for(int val : nums){
            maxfreq = max(maxfreq , mp[val]);
        }

        cout<<maxfreq<<endl;

        for(auto val : nums){
            if(mp[val] == maxfreq){
                ans +=  1;
            }
        }

        return ans;
    }
};