class Solution {
public:
    int valsum(int num){
        int sum = 0;

        while(num > 0){
            int dig = num % 10;

            sum += dig;

            num = num / 10;
        }

        return sum;
    }
    int minElement(vector<int>& nums) {
        int n = nums.size();

        for(int i=0; i<n; i++){
            int val = valsum(nums[i]);

            nums[i] = val;
        }

        int minval = INT_MAX;

        for(int value : nums){
            minval = min(minval , value);
        }

        return minval;
    }
};