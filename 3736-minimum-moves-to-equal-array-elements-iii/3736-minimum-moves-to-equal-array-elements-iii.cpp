class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxval = INT_MIN;

        for(int val : nums){
            maxval = max(maxval , val);
        }

        int count = 0;
        for(int val : nums){
            count += maxval - val;
        }

        return count;
    }
};