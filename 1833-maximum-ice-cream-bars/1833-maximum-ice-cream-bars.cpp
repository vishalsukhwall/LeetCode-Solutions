class Solution {
public:
    int maxIceCream(vector<int>& nums, int coins) {
        int n = nums.size();
        int count = 0;

        sort(nums.begin() , nums.end());
        for(int i=0; i<n; i++){
            if(nums[i] <= coins){
                count++;
                coins -= nums[i];
            }
        }

        return count;
    }
};