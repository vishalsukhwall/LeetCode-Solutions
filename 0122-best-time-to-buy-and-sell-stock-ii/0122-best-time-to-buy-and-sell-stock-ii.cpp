class Solution {
public:
    int maxProfit(vector<int>& nums) {
        vector<int> arr(10001 , 0);

        int buy = 0;
        for(int i=1; i<nums.size(); i++){
            buy = nums[i-1];

            if(buy < nums[i]){
                arr[i] = nums[i] - buy;
            }
        }

        int ans = 0;
        for(int val : arr){
            ans += val;
        }

        return ans;
    }
};