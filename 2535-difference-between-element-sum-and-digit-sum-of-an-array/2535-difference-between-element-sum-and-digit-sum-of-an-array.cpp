class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int num1 = 0 , num2 = 0;

        for(int val : nums){
            num1 += val;
        }

        for(int i=0; i<n; i++){
            int a = nums[i];

            while(a > 0){
                int dig = a % 10;
                num2 += dig;

                a = a / 10;
            }
        }

        return abs(num1 - num2);
    }
};