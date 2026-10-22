class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int n = nums.size();

        int count = 0;
        for(int val : nums){
            int num = val;

            while(num > 0){
                int dig = num % 10;

                if(dig == digit){
                    count++;
                }

                num = num / 10;
            }
        }

        return count;
    }
};