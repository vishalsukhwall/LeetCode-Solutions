class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // Fast I/O
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int n = nums.size();
        if (n == 0) return 0;

        // In-place sorting (O(1) extra space for memory optimization)
        sort(nums.begin(), nums.end());

        int maxlen = 1;
        int current_len = 1;

        for (int i = 1; i < n; i++) {
            // Agar duplicate hai, toh skip kar do
            if (nums[i] == nums[i - 1]) {
                continue;
            }
            // Agar consecutive hai
            else if (nums[i] == nums[i - 1] + 1) {
                current_len++;
            } 
            // Agar sequence toot gayi
            else {
                maxlen = max(maxlen, current_len);
                current_len = 1;
            }
        }
        
        return max(maxlen, current_len);
    }
};