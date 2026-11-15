class Solution {
public:
    int numOfSubarrays(vector<int>& nums) {
        int n = nums.size();
        long long even = 1;
        long long odd = 0;
        long long x = 1e9 + 7;
        long long ans = 0;

        long long sum = 0;
        for(int val : nums){
            sum += val;

            if(sum % 2 != 0){
                ans = (ans + even) % x;
                odd++;
            }
            else{
                ans = (ans + odd) % x;
                even++;
            }
        }

        return ans;
    }
};