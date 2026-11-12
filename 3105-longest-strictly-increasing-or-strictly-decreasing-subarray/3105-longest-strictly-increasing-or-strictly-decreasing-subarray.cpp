class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();

        int incount = 1 , decount = 1;
        int maxcount = 1;

        for(int i=1; i<n; i++){
            if(nums[i] > nums[i-1]){
                incount++;
                decount = 1;
            }
            else if(nums[i] < nums[i-1]){
                decount++;
                incount = 1;
            }
            else{
                incount = 1;
                decount = 1;
            }

            maxcount = max(maxcount , max(incount , decount));
        }

        return maxcount;
    }
};