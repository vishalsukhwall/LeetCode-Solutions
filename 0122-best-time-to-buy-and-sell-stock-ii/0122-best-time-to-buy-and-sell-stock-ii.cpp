class Solution {
public:
    int maxProfit(vector<int>& nums) {

        int buy = 0 , ans = 0;
        for(int i=1; i<nums.size(); i++){
            buy = nums[i-1];

            if(buy < nums[i]){
                ans += nums[i] - buy;
            }
        }

        return ans;
    }
};