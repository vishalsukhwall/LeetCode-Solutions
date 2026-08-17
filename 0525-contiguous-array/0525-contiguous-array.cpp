class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> ump;
        int maxLen = 0;
        int prefixSum = 0;
        
        ump[0] = -1;
        
        for (int i = 0; i < nums.size(); i++) {
            prefixSum += (nums[i] == 1 ? 1 : -1);
            
            if (ump.find(prefixSum) != ump.end()) {
                maxLen = max(maxLen, i - ump[prefixSum]);
            } else {
                ump[prefixSum] = i;
            }
        }
        
        return maxLen;
    }
};