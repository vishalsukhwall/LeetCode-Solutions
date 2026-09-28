class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int  maxlen = 0;

        int count = 0;
        for(int val : nums){
            if(val == 1){
                count++;
                maxlen = max(maxlen , count);
            }
            else{
                count = 0;
            }
        }
        return maxlen;
    }
};