class Solution {
public:
    int Sum(vector<int>& nums , int st , int end){
        int total = 0;

        for(int i=st; i<=end; i++){
            total += nums[i];
        }

        return total;
    }

    int subarraySum(vector<int>& nums) {
        int n = nums.size();

        int totalsum = 0;
        for(int i=0; i<n; i++){

            int st = max(0 , i - nums[i]);

            int sum = Sum(nums , st , i);
            totalsum += sum;
        }

        return totalsum;
    }
};