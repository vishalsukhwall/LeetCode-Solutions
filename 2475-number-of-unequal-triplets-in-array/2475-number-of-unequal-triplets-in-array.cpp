class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int , int> mp;

        for(int val : nums){
            mp[val]++;
        }

        int lefttotal = 0 , currfreq , total = 0 , righttotal;
        for(auto& val : mp){
            currfreq = val.second;
            righttotal = n - currfreq - lefttotal;
            total += (lefttotal * currfreq * righttotal);
            lefttotal += val.second;
        }

        return total;
    }
};