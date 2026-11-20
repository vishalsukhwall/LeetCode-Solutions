class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        sort(nums.begin() , nums.end());

        int i = 0 , j = n-1;
        while(i < j){
            sum =  max(sum , nums[i] + nums[j]);
            i++ , j--;
        }

        return sum;
    }
};