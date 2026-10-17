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

        int minval = INT_MAX;
        
        for(int i=0; i<n; i++){
            int val = valsum(nums[i]);

            minval = min(minval , val);
        }

        return minval;
    }
};