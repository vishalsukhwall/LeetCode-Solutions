class Solution {
public:
    int missingInteger(std::vector<int>& nums) {
        std::unordered_set<int> numsSet(nums.begin(), nums.end());
        
        int ans = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == nums[i - 1] + 1) {
                ans += nums[i];
            } else {
                break;
            }
        }
        
        while (numsSet.count(ans)) {
            ans++;
        }
        
        return ans; 
    }
};