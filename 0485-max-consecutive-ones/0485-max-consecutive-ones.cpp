class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxOne = 0;
        int currcount = 0;

        for(int i=0; i<n; i++){
            if(nums[i] == 1){
                currcount++;
                maxOne = max(maxOne , currcount);
            }
            else{
                currcount = 0;
            }
        }
        return maxOne;
    }
};